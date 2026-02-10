//Enunciado 2: Árbol Balanceado 
//
//Desarrolle un programa que implemente un árbol balanceado. 
// El sistema debe permitir al usuario://
//    Insertar valores numéricos en el árbol mediante una 
// interfaz en consola.
////    Elegir si desea insertar más datos o
// visualizar los recorridos del árbol.//
//    Observar que el árbol se mantiene 
// balanceado automáticamente tras cada inserción, 
// evitando que se degrade en una lista.//
//El objetivo es que el estudiante compare
// el funcionamiento entre un árbol binario de búsqueda 
// tradicional y un árbol balanceado, analizando las diferencias 
// en la forma del árbol y en la eficiencia de búsqueda.

//Nodo de AVL
#include <iostream>
#include <algorithm>
using namespace std;

//using namespace std;

struct Nodo
{
	int dato;
	Nodo* izquierdo;
	Nodo* derecho;
	int altura;
	Nodo(int valor) {
		dato = valor;
		izquierdo = nullptr;
		derecho = nullptr;
		altura = 1; // La altura de un nuevo nodo es 1

	}
	 //Nuevo comentario
};

class AVL {
	private: Nodo* raiz;

	int altura(Nodo* nodo) {
		return nodo ? nodo->altura : 0;

	}

	int balanceado(Nodo* nodo){
		return nodo ? altura(nodo->izquierdo) - altura(nodo->derecho) : 0;
		
	}

	//IZQ-- > DER, DER-- > IZQ, IZQ-- > IZQ, DER-- > DER

	Nodo* rotarIzquierda(Nodo* x) {
		Nodo* y = x->derecho;
		Nodo* T2 = y->izquierdo;//Subarbol que se mueve va para el derecho

		y->izquierdo = x;
		x->derecho = T2;
		//recuerden que es la izquierda, luego la derecha
		x->altura = max(altura(x->izquierdo), altura(x->derecho)) + 1;
		//recuerden que es la izquierda, luego la derecha
		y->altura = max(altura(y->izquierdo), altura(y->derecho)) + 1;

		return y;
	}


	Nodo* rotarDerecha(Nodo* y) {
		Nodo* x = y->izquierdo;
		Nodo* T2 = y->derecho;//Subarbol que se mueve va para el derecho

		x->derecho = y;
		y->izquierdo = T2;
		//recuerden que es la izquierda, luego la derecha
		y->altura = max(altura(y->izquierdo), altura(y->derecho)) + 1;
		//recuerden que es la izquierda, luego la derecha
		x->altura = max(altura(x->izquierdo), altura(x->derecho)) + 1;

		return x;
	}


	Nodo* insertar(Nodo* nodo, int valor) {
		if (!nodo) {
			return new Nodo(valor);
		}

		//Primera consulta para ingresar lo datos en el lado izquierdo
		if (valor < nodo->dato){
			nodo->izquierdo = insertar(nodo->izquierdo, valor);
		}
		else if (valor > nodo->dato) {
			nodo->derecho = insertar(nodo->derecho, valor);
		}
		else
		{
			return nodo;
		}

		//Si vamos acumulando debemos sumar 1 a la altura del nodo
		nodo->altura = 1 + max(altura(nodo->izquierdo), altura(nodo->derecho));


		int obtenerBalance = balanceado(nodo);


		//Creamos la seccion de rotacion 
		if (obtenerBalance > 1 && valor < nodo->izquierdo->dato) {
			return rotarDerecha(nodo);
		}
		else if (obtenerBalance < -1 && valor > nodo->derecho->dato)
		{
			return rotarIzquierda(nodo);
		}

		else if (obtenerBalance > 1 && valor > nodo->izquierdo->dato)
		{
			nodo->izquierdo = rotarIzquierda(nodo->izquierdo);
			return rotarDerecha(nodo);
		}

		else if (obtenerBalance < -1 && valor < nodo->derecho->dato)
		{
			nodo->derecho = rotarDerecha(nodo->derecho);
			return rotarIzquierda(nodo);
		}


		return nodo;


	}

	void inorden(Nodo* nodo) {
		if (nodo) {
			inorden(nodo->izquierdo);
			cout << nodo->dato << " ";
			inorden(nodo->derecho);
		}
	}



public:
	AVL() {
		raiz = nullptr;
	}

	void insertar(int valor) {
		raiz = insertar(raiz, valor);
	}

	void mostrarInorden() {
		cout << "Recorrido Inorden: ";
		inorden(raiz);
		cout << endl;
	}



};

int main() {
	AVL arbol;

	arbol.insertar(10);
	arbol.insertar(5);

	arbol.insertar(15);
	arbol.insertar(3);

	arbol.insertar(7);
	arbol.insertar(12);

	arbol.insertar(18);
	arbol.insertar(4);
	arbol.mostrarInorden();

	return 0;
}


//Pendientes una interfaz, para seleccionar cuando si y no insertar, y mostrar los recorridos, y comparar con el arbol binario de busqueda tradicional.