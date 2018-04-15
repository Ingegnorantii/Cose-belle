#include<stdio.h>

int main(void){
	
	int integer, i=1, result=0;
	printf("Inserire un intero:\n");
	scanf("%d", &integer);

	while(i<=integer){
		result = result + i;
		i++;						// i = i + 1;
	}
	printf("La sommma è: %d\n", result);
}