
/*
VARIABILI E OPERATORI IN C: ESERCIZIO 4
Scrivere un programma C che domandi all’utente di inserire un numero intero e stampi i valori intero del
precedente e del successivo.
*/

#include <stdio.h>

int main( void ){

	// Variabile che conterrà l'intero inserito dall'utente
	int integer; 

	// Variabili che conterranno il valori degli interi precendente e successivo
	int previous, next; 

	printf("Inserire un valore intero: ");
	scanf("%d", &integer);

	previous = integer - 1;
	next = integer + 1;
	
	printf("Il valore precedente è = %d\n", previous);
	printf("Il valore successivo è = %d\n", next);

	return 0;
}