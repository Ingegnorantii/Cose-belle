
/*
VARIABILI E OPERATORI IN C: ESERCIZIO 2
Il linguaggio C può rappresentare le lettere maiuscole, minuscole e molti altri simboli utilizzando un byte per ogni carattere. 
E’ possibile visualizzare l’intero equivalente della lettera maiuscola A eseguendo l’istruzione:
printf(“%d”, ‘A’);
Scrivere un programma C che visualizzi gli interi equivalenti dei seguenti simboli: A, B, a, b, 1, 2, $, *, + e il carattere spazio. 
*/

#include <stdio.h>

int main( void ){

  	printf("A = %d\n", 'A');

	printf("B = %d\n", 'B');

	printf("a = %d\n", 'a');

	printf("b = %d\n", 'b');

	printf("1 = %d\n", '1');

	printf("2 = %d\n", '2');

	printf("$ = %d\n", '$');

	printf("* = %d\n", '*');

	printf("+ = %d\n", '+');

	printf("spazio = %d\n", ' ');

	return 0;
}