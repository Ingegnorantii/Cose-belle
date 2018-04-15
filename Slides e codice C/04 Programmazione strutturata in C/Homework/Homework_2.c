#include<stdio.h>

int main(void){
	int integer;
	int divisore = 2;
	int primo = 1;

	printf("Inserire un intero:\n");
	scanf("%d", &integer);

	while(divisore<integer){
		if(integer % divisore == 0)
			primo = 0;
		divisore = divisore + 1;
	}

	if(primo == 1){
		printf("Il numero è primo\n");
	}else{
		printf("Il numero non è primo\n");
	}
}