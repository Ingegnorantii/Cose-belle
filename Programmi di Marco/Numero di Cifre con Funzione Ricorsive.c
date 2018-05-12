#include <stdio.h>

int cifre(long);

int counter;

int main()
{
	long num,c;
	
	printf("Inserisci un numero: ");
	scanf("%d",&num);
	
	c=cifre(num);
	
	printf("Le cifre sono: %d",c);
	return 0;
}

int cifre(long n)
{
	float s;
	
	
	
	if(n/10==0)
	{
		counter++;
		return counter;
	}
	else
	{
		counter++;
		n=n/10;
		return  cifre(n);
	}
}
