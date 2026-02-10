//#include <iostream>
//#include "ArbolBinario.h"
//
//using namespace std;
////insertarNodo
//
//// Constructor
//ArbolBinario::ArbolBinario() {
//	raiz = nullptr;
//}
////Es como acceder a las funciones de la interfaz, valida que exista en ambos lugar (::)
//Nodo* ArbolBinario::insertarNodo(Nodo* nodo, int valor) {
//	if (nodo == nullptr) {//Es un puntero nullo, no tiene valor en memoria
//		return new Nodo(valor);
//	}
//	//"->" esto es igual al punto que usamos en otros lenguajes
//	if (valor < nodo->dato) {
//		nodo->izquierdo = insertarNodo(nodo->izquierdo, valor);
//	} else {
//		nodo->derecho = insertarNodo(nodo->derecho, valor);
//	}
//	return nodo;
//}
//
//void ArbolBinario::mostrarArbol(Nodo* nodo, int nivel) {
//	if (nodo == nullptr) {
//		return;
//	}
//
//	mostrarArbol(nodo->derecho, nivel + 1);
//
//	cout << string(nivel * 4, ' ') << nodo->dato << endl;
//
//	mostrarArbol(nodo->izquierdo, nivel + 1);
//}
//
////Funciones de recorrido
//void ArbolBinario::inOrden(Nodo* nodo) {
//	if (nodo != nullptr) {
//		inOrden(nodo->izquierdo);
//		cout << nodo->dato << " ";
//		inOrden(nodo->derecho);
//
//	}
//}
////Crear el preorden La raiz se visita primero, luego el subárbol izquierdo y finalmente el subárbol derecho.
//void ArbolBinario::preOrden(Nodo* nodo) {
//	if (nodo != nullptr) {
//		cout << nodo->dato << " ";
//		preOrden(nodo->izquierdo);
//		preOrden(nodo->derecho);
//	}
//}
//
////Postorden la raíz se visita al final, después de visitar ambos subárboles.
//void ArbolBinario::postOrden(Nodo* nodo) {
//	if (nodo != nullptr) {		
//		postOrden(nodo->izquierdo);
//		postOrden(nodo->derecho);
//		cout << nodo->dato << " ";
//	}
//}
//
////Metodos publicos
//void ArbolBinario::insertar(int valor) {
//	raiz = insertarNodo(raiz, valor);
//}
//
//void ArbolBinario::mostrarArbol() {
//	cout << "Representacion de la Estructura del Arbol Binario:" << endl;
//	mostrarArbol(raiz, 0);
//}
//
//
//void ArbolBinario::mostrarRecorridos() {
//	cout << "Recorrido en orden: ";
//	inOrden(raiz);
//	cout << "\nRecorrido en preOrden: ";
//	preOrden(raiz);
//	cout << "\nRecorrido en postOrden: ";
//	postOrden(raiz);
//	cout << endl;
//
//	
//	// 
//
//}