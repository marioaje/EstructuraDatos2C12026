//puntero (tipo*) malloc(cantidad de bytes a reservar);

#include <stdio.h>
#include <stdlib.h>


int main() {

	int limite_de_memoria;
	//limite de memoria???
	int* arrgelo;

	printf("Ingrese el limite de memoria: ");
	scanf_s("%d", &limite_de_memoria);

	//puntero(tipo*) malloc(cantidad de bytes a reservar);
	arrgelo = (int*)malloc(limite_de_memoria * sizeof(int));

	if (arrgelo == NULL) {
		printf("Error al reservar memoria\n");
		return 1;
	}

	printf("Memoria reservada exitosamente\n");


	printf("Ingrese los valores personales: ");
	for (int i = 0; i < limite_de_memoria; i++) {
		scanf_s("%d", &arrgelo[i]);
	}

	
	printf("Valores almacenados\n");

	for (int i = 0; i < limite_de_memoria; i++) {
		printf("%d", arrgelo[i]);
	}

	//No se olvide liberar la memoria
	free(arrgelo);
	return 0;

}