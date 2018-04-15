
/*
VARIABILI E OPERATORI IN C: ESERCIZIO 5
Scrivere un programma C che domandi all’utente di inserire due numeri interi e li usi per stampare la
somma, la differenza, il prodotto, il quoziente e il resto (operatore %).
*/

#include <stdio.h>

int main( void ){

	// Variabile che conterranno gli interi inseriti dall'utente
	int integer1, integer2; 

	// Variabili che conterranno i valori finali delle operazioni
	int sum, dif, product, quot, rest; 

	printf("Inserire il primo valore intero: ");
	scanf("%d", &integer1);

	printf("Inserire il secondo valore intero: ");
	scanf("%d", &integer2);

	sum = integer1 + integer2;
	dif = integer1 - integer2;
	product = integer1 * integer2;
	quot = integer1 / integer2;
	rest = integer1 % integer2;
	
	printf("Somma = %d\n", sum);
	printf("Differenza = %d\n", dif);
	printf("Prodotto = %d\n", product);
	printf("%d : %d = %d con resto di %d\n", integer1, integer2, quot, rest);

	return 0;
}