//Nodo{
//	caracter
//    frecuencia
//
//    Nodo izq der
//
//    Nodo (con todos los atributos)
//
//}
//
//
//comparardor{
//    evaluar(nodo, nodo)
//   
//    devolucion nodo- frecuencia, nodo- frecuencia
//}
//
//funciones replace(caracter, codigo binario)
//Carácter	Código Binario
//A	01000001
//B	01000010
//C	01000011
//D	01000100
//E	01000101
//F	01000110
//G	01000111
//H	01001000
//I	01001001
//J	01001010
//K	01001011
//L	01001100
//M	01001101
//N	01001110
//O	01001111
//P	01010000
//Q	01010001
//R	01010010
//S	01010011
//T	01010100
//U	01010101
//V	01010110
//W	01010111
//X	01011000
//Y	01011001
//Z	01011010
//
//Guardar el comprimido
//
//Esta la funcioninversa la que descomprime()
//
//
//
//
//
//
//
//
//
//
//
//para archivo de entrada.txt ( aca guardamos el texto comun y silvestre sin modificaciones)
//
//
//comprido ( almacena el texto en compresion )
//
//descompprimir 
//
//
//
//puede usar map y tabla 
//
//🧩 Laboratorio : Árboles de Huffman y Compresión
//🎯 Objetivo
//
//Aplicar el algoritmo de Huffman para comprimir y descomprimir un archivo de texto, comprendiendo cómo las estructuras de prioridad y codificación variable permiten optimizar el almacenamiento.
//El laboratorio utilizará letras(a–z) y números(0–9) como conjunto principal de símbolos.
//🧠 Instrucciones
//
//Lectura y análisis del archivo
//
//Leer el archivo entrada.txt.
//
//Calcular la frecuencia de aparición de cada carácter(de ‘a’ a ‘z 'A’ 'Z' y de ‘0’ a ‘9’).
//
//    Ignorar otros símbolos o espacios si los hay.
//
//    Construcción del Árbol de Huffman
//
//    Crear un nodo hoja para cada carácter con su frecuencia.
//
//    Insertar todos los nodos en una cola de prioridad(min - heap) ordenada por frecuencia.
//
//    Combinar los dos nodos con menor frecuencia en un nodo padre, sumando sus frecuencias.
//
//    Repetir el proceso hasta que quede un solo nodo(la raíz del árbol).
//
//    Generación de códigos binarios
//
//    Recorrer el árbol :
//
//Agregar ‘0’ al moverse a la izquierda.
//
//Agregar ‘1’ al moverse a la derecha.
//
//Asignar el código binario a cada carácter.
//
//
//Codificación del texto
//
//Reemplazar cada carácter del archivo original con su código binario correspondiente.
//
//Guardar la secuencia resultante en un nuevo archivo comprimido.txt.
//
//Decodificación(Descompresión)
//
//Leer el archivo binario.
//
//Usar el árbol de Huffman para recorrer los bits y reconstruir el texto original.
//
//Guardar el resultado en descomprimido.txt.
//
//Comparación de tamaños
//
//Calcular el tamaño del archivo original(entrada.txt) y el comprimido(comprimido.txt).
//
//Mostrar la relación de compresión : comparando el resultado del peso vs el codigo ascii