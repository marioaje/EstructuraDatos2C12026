////Caso práctico : Simulación de sistema de archivos con Árbol B +
////
////Cada nodo interno representa un índice de directorio.
////
////Cada hoja contiene las referencias a los archivos reales.
////
////Permite buscar un archivo en muy pocos accesos(1 a 3 saltos).
////
////Ejemplo: buscar un archivo en el directorio / Documentos / 2025 / Tareas / .
////
////🔹 Laboratorio sugerido
////
////Implementación en C++ de :
////
////    Inserción en Árbol B + : leer claves desde teclado, almacenarlas en hojas y mantener balance.
////
////    Búsqueda en Árbol B + : localizar una clave e imprimir si existe o no.
////
////    Recorrido secuencial : recorrer la lista enlazada de hojas mostrando todos los datos en orden.
//#include "ArbolNodoplus.h"
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//Nodoplus::Nodoplus(bool hoja) {
//	esHoja = hoja;
//	siguiente = nullptr;
//}
//
//ArbolNodoPlus::ArbolNodoPlus(){
//	raiz = new Nodoplus(true); // Inicializamos la raíz como una hoja
//}
//
//
//void ArbolNodoPlus::dividirRaiz() {
//
//	//3 raices
//	Nodoplus* nuevaRaiz = new Nodoplus(false); // Nueva raíz que no es hoja
//	Nodoplus* hojaIzquierda = new Nodoplus(true); // Nueva hoja izquierda
//	Nodoplus* hojaDerecha = new Nodoplus(true); // Nueva hoja izquierda
//
//	hojaIzquierda->claves.push_back(raiz->claves[0]); // Primera clave de la raíz original a la hoja izquierda
//	hojaDerecha->claves.push_back(raiz->claves[1]); // Primera clave de la raíz original a la hoja izquierda
//	
//	hojaIzquierda->siguiente = hojaDerecha; // Enlazamos las hojas
//
//	nuevaRaiz->claves.push_back(raiz->claves[1]); // La clave de división se convierte en la clave de la nueva raíz
//	//la insercion de los hijos
//	nuevaRaiz->hijos.push_back(hojaIzquierda); // La hoja izquierda se convierte en el primer hijo de la nueva raíz
//	nuevaRaiz->hijos.push_back(hojaDerecha); // la hoja derecha se convierte en el segundo hijo de la nueva raíz
//
//	raiz = nuevaRaiz; // La nueva raíz se convierte en la raíz del árbol
//	// Implementar la lógica para dividir la raíz cuando se alcance el número máximo de claves
//}
//
//
////El  insertar va a crear el nodo actual (raiz)
////
////
////verifica nodo es un hoja
////va insertar la clave en el nodo hoja
////
////funcion de sort
////
////
////if el tamano ==ORDEN
////dividir