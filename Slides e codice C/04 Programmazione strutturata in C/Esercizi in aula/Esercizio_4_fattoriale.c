#include<stdio.h>

int main(void){
	unsigned int i=1, valore;
	unsigned int risultato = 1;

	printf("Inserire un valore: \n");
	scanf("%d", &valore);

	while(i<=valore){
		risultato = risultato * i;
		printf("Iterazione %u: risultato %u\n", i, risultato);
		i++;
	}

	printf("Risultato: %d\n", risultato);
	return 0;
}

