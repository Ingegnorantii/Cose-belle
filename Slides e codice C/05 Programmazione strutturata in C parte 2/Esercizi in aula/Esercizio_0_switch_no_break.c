#include<stdio.h>

int main(void){

	char character;

	printf("Inserire un carattere [a-d]: \n");
	scanf("%c", &character);

	switch(character){
		case 'a':
			printf("Hai inserito il carattere: %c\n", character);
			break;
		case 'b':
			printf("Hai inserito il carattere: %c\n", character);
			//break;
		case 'c':
			printf("Hai inserito il carattere: %c\n", character);
			//break;		
		case 'd':
			printf("Hai inserito il carattere: %c\n", character);
			break;
		default:
			printf("Carattere non valido\n");
			break;		
	}
	
	return 0;
}