#pragma once
#ifndef ARBOLBINARIO_H
#define ARBOLBINARIO_H

#include "Nodo.h"

class ArbolBinario {
	private:
		Nodo* raiz; // Puntero a la raíz del árbol
		// Función auxiliar para insertar un nodo
		Nodo* insertarNodo(Nodo* nodo, int valor);
		//// Función auxiliar para recorrer el árbol en orden
		void inOrden(Nodo* nodo);
		void postOrden(Nodo* nodo);
		void preOrden(Nodo* nodo);
		void mostrarArbol(Nodo* nodo, int nivel);//Funcion para mostrar los valores del arbol

	public:
		ArbolBinario(); // Constructor
		void insertar(int valor); // Función pública para insertar un nodo
	//	void recorridoEnOrden(); // Función pública para recorrer el árbol en orden
		void mostrarArbol(); // Función pública para mostrar el árbol

		void mostrarRecorridos(); // Función pública para mostrar los recorridos
};


#endif // !1
