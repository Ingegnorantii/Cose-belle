#include <stdio.h>

int fibo (int);

int a=0;
int b=1;
int c;

int main()
{
	
	int x;
	
	printf("Inserisci il numero: ");
	scanf("%d",&x);
	printf("%d %d",a,b);
	fibo(x);
	
	return 0;
	
}

int fibo(int n)
{
	int i,d;
	
	c=a+b;
	if(c<n+1)
	{
		printf(" %d",c);
		a=b;
	    b=c;
	    return fibo(n);
	}
	else
	{
	 return 0;	
	}
	
	
	
	
}
