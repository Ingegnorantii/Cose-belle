#include<stdio.h>

int main(void){

	int sum=0, i=0, n, avg;
	
	do{
		printf("Inserire un numero: \n");
		scanf("%d",&n);
		
		while(n<0){
			printf("Inserire un numero non negativo!\n");
			scanf("%d",&n);
		}
		
		/*Questo if è necessario per non considerare il valore 0*/
		if(n>0){ 
			sum=sum+n;
			i++; 
		}
	}while(n>0);
	
	if(i!=0){
		avg=sum/i;
		printf("Media: %d\n", avg);
	}else 
		printf("Inserire almeno un numero\n");

	return 0;
}



