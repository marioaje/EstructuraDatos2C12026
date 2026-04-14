//Producto y un Consumidor
#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

using namespace std;

int buffer = 0; // Buffer compartido
bool disponible = false; // Indica si el buffer tiene un producto disponible	

mutex mtx; // Mutex para proteger el acceso al buffer
condition_variable cv; // Variable de condición para sincronizar productor y consumidor


//Productor
void Productor() {
	for (int i = 1; i <= 5; ++i){
		unique_lock<mutex> lock(mtx);

		//Esperamos a que el buffer esté disponible
		cv.wait(lock, [] {return !disponible;});

		buffer = i; // Producimos un producto
		cout << "Productor produjo: " << buffer << endl;

		disponible = true; // Marcamos el buffer como disponible
		cv.notify_one(); // Notificamos al consumidor
	}
}

//Consumidor
void Consumidor() {
	for (int i = 1; i <= 5; ++i) {
		unique_lock<mutex> lock(mtx);

		//Esperamos a que el buffer esté disponible
		cv.wait(lock, [] {return disponible;});

		buffer = i; // Producimos un producto
		cout << "Consumidor consume: " << buffer << endl;

		disponible = false; // Marcamos el buffer como disponible
		cv.notify_one(); // Notificamos al productor
	}
}
//
//int main() {
//	thread productor(Productor);
//	thread consumidor(Consumidor);
//	productor.join();
//	consumidor.join();
//	return 0;
//}

//Generarlos en dos hilos separados