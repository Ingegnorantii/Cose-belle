#include<stdio.h>

int main(void){
	unsigned int i = 10;
	int count = 0;

	while ( i < 0 ) {
		count = count + 1;
		printf("%d\n", count);
		i = i - 1; 
	}

	return 0;		
}


