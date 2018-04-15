#include<stdio.h>

int main(void){

	int i=0, sum=0; 
	unsigned int N, M;

	printf("Inserire l'intero positivo N\n");
	scanf("%u", &N);

	while(sum<=N){ // esci quando sum supera strettamente N
		i++;
		sum=sum+i;
	}
	
	M = i-1;

	printf("M=%u\n",M);

	return 0;
}



