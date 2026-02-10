//#include <stdio.h>
//
//#define MAX 10
//
//
//struct Persona {
//	int idPersona;	
//	char nombre[20];
//	char apellido[20];
//};
//
////En la construcion o prototipo funciones
//void insertarPersonas(struct Persona* datos);
//void mostrarPersonas(struct Persona* datos);
////
////int main() {
////
////
////	struct Persona listaPersonas[MAX];	
////	int contador = 0;
////
////
////
////	insertarPersonas(&listaPersonas[contador]);
////
////
////	mostrarPersonas(&listaPersonas[contador]);
////	/*struct Persona datos =
////	{
////		1,
////		"Mario",
////		"Jimenez"
////	};*/
////	
////	//printf("ID: %d\n nombre: %s\n %s\n", datos.idPersona, datos.nombre, 
////	//	datos.apellido);
////	return 0;
////
////}
//
//
//void insertarPersonas(struct Persona* datos) {
//	printf("Ingrese ID: ");
//	scanf_s("%d", &datos->idPersona);
//
//	printf("Ingrese Nombre: ");
//	scanf_s("%s", datos->nombre, sizeof(datos->nombre));
//
//	printf("Ingrese Apellido: ");
//	scanf_s("%s", datos->apellido, sizeof(datos->apellido));
//	
//}
//
//
//void mostrarPersonas(struct Persona* datos) {
//	printf("ID: %d\n nombre: %s\n %s\n", datos->idPersona, datos->nombre,
//		datos->apellido);
//}
