#include <stdio.h>

struct Persona {
	int idPersona;	
	char nombre[20];
	char apellido[20];
};

int main() {
	struct Persona datos =
	{
		1,
		"Mario",
		"Jimenez"
	};
	
	printf("ID: %d\n nombre: %s\n %s\n", datos.idPersona, datos.nombre, 
		datos.apellido);
	return 0;

}
