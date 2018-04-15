#include<stdio.h>

int main(void){

	int n, m, val, product;
	int flag = 0;
	
	printf("Inserire il primo numero\n");
	scanf("%d", &n);

	printf("Inserire il secondo numero\n");
	scanf("%d", &m);
	
	product = n*m;
	
	if (n > m) 
		val = n;
	else 
		val = m;

	while (val < product && flag == 0) {
		if (val%n == 0 && val%m == 0) 
	  		flag = 1;
		else 
	  		val = val+1;
	}
	
	printf("mcm(%d,%d) = %d.\n", n, m, val);
	
	return 0;
}