#pragma once
#ifndef  NODO_H
#define NODO_H
//Aca creamos la estructura "la clase arbol"

struct Nodo {
	int dato; // Dato que almacena el nodo
	Nodo* izquierdo; // Puntero al hijo izquierdo
	Nodo* derecho; // Puntero al hijo derecho

	// Constructor para inicializar el nodo
	Nodo(int valor) {
		dato = valor;
		izquierdo = nullptr;
		derecho = nullptr;
	
	}
};

#endif // ! NODO_H


