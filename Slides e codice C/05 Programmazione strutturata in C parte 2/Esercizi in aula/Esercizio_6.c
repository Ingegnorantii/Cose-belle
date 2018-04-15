#include<stdio.h>

int main(void){

	int i=0;
	int p,n,r,q;

	printf("Inserire il valore per n e p: \n");
	scanf("%d %d", &n, &p);

	if(n>=0){
		while(1){
			if(n>i*p && n<=(i+1)*p)
				break;
			i++;
		}
	}else{
		while(1){
			if(n>i*p && n<=(i+1)*p)
				break;
			i--;
		}
	}

	q = i;
	r = n - q * p;

	printf("q = %d \n", q);
	printf("r = %d \n", r);
	
	return 0;
}