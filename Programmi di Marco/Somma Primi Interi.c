#include <stdio.h>

int myfunction(int);

int main()
{
	int N, ris;
	
	printf("Inserisci il Numero: ");
	scanf("%d",&N);
	
	ris=myfunction(N);
	
	printf("La somma dei Primi interi di %d e' uguale a %d",N,ris);
	
	return 0;
}

int myfunction(int num)
{
	if(num==0)
	{
		return 0;
	}
	else
	{
	return num + myfunction(num-1);
    }
}

