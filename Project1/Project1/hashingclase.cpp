//es el tamano del hashing

#include <iostream>
using namespace std;

const int TAMANO_HASHING = 7;

int tablaHash[TAMANO_HASHING];

int hashFunction(int valor) {
	return valor % TAMANO_HASHING;
}


void insertar(int valor) {
 ///la funcion es la has...
	int indice = hashFunction(valor);


	while (tablaHash[indice] != -1) {
		indice = (indice + 1) % TAMANO_HASHING; // 
	}

	tablaHash[indice] = valor;

}

void mostrar() {
	for (int i = 0; i < TAMANO_HASHING; i++) {
		cout << "Índice " << i << " - ";

		if (tablaHash[i] == -1) {
			cout << "Vacío" << endl;

		}
		else {
			cout << tablaHash[i] << endl;
		}
			cout << "---" << endl;

	}

}

int main() {
	//Inicializamos la tabla de hashing con -1 para indicar que está vacía
	for (int i = 0; i < TAMANO_HASHING; i++) {
		tablaHash[i] = -1;
	}
	insertar(10);
	insertar(20);
	//insertar(30);
	insertar(40);
	insertar(50);
	//insertar(60);
	insertar(70);
	mostrar();
	//cout << "Tabla de Hashing:" << endl;
	//for (int i = 0; i < TAMANO_HASHING; i++) {
	//	cout << "Índice " << i << ": " << tablaHash[i] << endl;
	//}
	return 0;
}