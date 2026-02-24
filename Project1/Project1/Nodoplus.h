//Caso práctico : Simulación de sistema de archivos con Árbol B +

//Cada nodo interno representa un índice de directorio.

//Cada hoja contiene las referencias a los archivos reales.


#ifdef NODOPLUS_H
#define NODOPLUS_H




#include <iostream>
#include <vector>
using namespace std;


const int ORDEN = 3; // Orden del árbol B+

class Nodoplus {

	public:

		bool esHoja;		
		vector<string> claves; // Vector de claves para hojas (//Cada nodo interno representa un índice de directorio.)
		vector<Nodoplus*> hijos; // Vector de punteros a nodos hijos
		Nodoplus* siguiente; // Puntero al siguiente nodo hoja para enlazar las hojas

		Nodoplus(bool hoja) {
			esHoja = hoja;
			siguiente = nullptr;
		}
};





#endif // NODOPLUS_H