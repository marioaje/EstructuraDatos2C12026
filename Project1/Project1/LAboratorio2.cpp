📘 Laboratorio Práctico : Implementación de un Árbol B +
Enunciado

En este laboratorio se trabajará con la implementación de un Árbol B + en C++.Esta estructura es ampliamente utilizada en sistemas de bases de datos y sistemas de archivos debido a su capacidad de mantener datos ordenados y permitir accesos eficientes.

El objetivo es que los estudiantes experimenten cómo los nodos se dividen y reorganizan automáticamente cuando se insertan más elementos de los que puede contener un nodo, garantizando que el árbol se mantenga balanceado.

Se proporciona un código base en C++ que permite insertar claves, realizar búsquedas y recorrer el árbol en orden secuencial(a través de las hojas enlazadas).

Los estudiantes deberán :

Ejecutar el programa con el conjunto de datos predefinido{ 20, 10, 15, 25, 32, 5, 8, 17, 48, 16, 18, 19 }.

Observar el resultado del recorrido secuencial, verificando que los datos aparecen en orden ascendente.

Modificar el vector de datos en el programa principal, probando diferentes órdenes de inserción y nuevos valores.

Analizar cómo cambia la estructura interna del árbol a medida que se insertan los elementos.

Comparar la diferencia entre un recorrido secuencial en Árbol B + y un recorrido Inorden en un Árbol Binario de Búsqueda(BST).

Objetivos del laboratorio

Comprender las diferencias entre un Árbol B y un Árbol B + .

Observar cómo el balance automático ocurre mediante divisiones de nodos.

Aplicar operaciones básicas de inserción y búsqueda en un Árbol B + .

Analizar las ventajas de los recorridos secuenciales gracias al enlazado de hojas.

Recorrido secuencial : 5 8 10 15 16 17 18 19 20 25 32 48
Buscar 25 : Encontrado
Buscar 50 : No encontrado