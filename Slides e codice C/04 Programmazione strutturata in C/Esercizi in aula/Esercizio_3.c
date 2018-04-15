#include<stdio.h>

int main(void){
	
	int integer, i=1, count=0;
	printf("Inserire un intero:\n");
	scanf("%d", &integer);

	while(i<=integer){
		if(i % 2 == 0)
			count++;
		i++;
	}
	printf("Il numero di interi nell' intervallo è: %d\n", count);
}