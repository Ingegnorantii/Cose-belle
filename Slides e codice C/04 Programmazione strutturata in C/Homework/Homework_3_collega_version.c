#include<stdio.h>

int main(void){
	int n;
	int sum = 0;
	// int i = n; <------- ERRORE: n non è stato inizializzato!

	printf("Inserisci un valore: \n");
	scanf("%d", &n);

	int i = n;  // <------ L'istruzione va messa qui

	if(n > 0){
		while (i <= 2*n){
			sum = sum + i;
			i++;
		}
		printf("La somma è: %d\n", sum); 
	}
	else{
		if (n < 0){
			while (i >= 2*n){
				sum = sum - i;
				i--;
			}
			printf("La somma è: %d\n", sum);
		}
	}
}