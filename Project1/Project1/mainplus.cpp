//Caso práctico : Simulación de sistema de archivos con Árbol B +
//
//Cada nodo interno representa un índice de directorio.
//
//Cada hoja contiene las referencias a los archivos reales.
//
//Permite buscar un archivo en muy pocos accesos(1 a 3 saltos).
//
//Ejemplo: buscar un archivo en el directorio / Documentos / 2025 / Tareas / .
//
//🔹 Laboratorio sugerido
//
//Implementación en C++ de :
//
//    Inserción en Árbol B + : leer claves desde teclado, almacenarlas en hojas y mantener balance.
//
//    Búsqueda en Árbol B + : localizar una clave e imprimir si existe o no.
//
//    Recorrido secuencial : recorrer la lista enlazada de hojas mostrando todos los datos en orden.
#include "ArbolNodoplus.h"
#include <iostream>
#include <algorithm>