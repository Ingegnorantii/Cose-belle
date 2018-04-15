/*
* Programma C per trovare il massimo tra due numeri inseriti dall'utente
*/

#include<stdio.h>

int main(void){
	int x,y;

	printf("Inserire il primo numero: ");
	scanf("%d", &x);

	printf("Inserire il secondo numero: ");
	scanf("%d", &y);

	if( x==y ){
		printf("I numeri sono uguali!\n");
	}else{
		if(x > y){
			printf("Il maggiore è %d\n", x);
		} else {
			printf("Il maggiore è %d\n", y);
		}
		}
	return 0;
}



