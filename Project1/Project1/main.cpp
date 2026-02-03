#include <iostream>
#include "ArbolBinario.h"

using namespace std;

int main() {
	ArbolBinario arbol;

	int datos[] = { 50, 30, 70, 20, 40, 60, 80 };

	for (int valor : datos) {
		arbol.insertar(valor);
	}

	arbol.mostrarArbol();
	arbol.mostrarRecorridos();

	return 0;
}