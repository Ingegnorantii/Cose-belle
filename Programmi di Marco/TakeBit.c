#include <stdio.h>

void takeBit(int);

int main ()
{
	unsigned int a=1;
	unsigned int b;
	
	do
	{
	printf("Inserisci il Numero: ");
	scanf(" %d",&b);
    }
    while((b<1)||(b>31));
    
	takeBit(b);
	
	return 0;
    
}

void takeBit(int n)
{
	unsigned mask=1;
	
	printf("La cifra meno significativa : %d", mask&n);
	printf("\nLa cifra piu' significativa : %d", (mask<<31)&n);
	
	
}
