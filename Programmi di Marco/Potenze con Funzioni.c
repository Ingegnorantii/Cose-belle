#include <stdio.h>

long power(int,int);
void printh();
void printt(int);

int main()
{
	int num,a=1;
	
	printf("Inserisci il numero: ");
	scanf("%ld",&num);

	
	printh();
    printt(num);
	
	return 0;
}

void printh()
{
	printf("Tabella Potenze");
	
}


long power(int m, int n)
{
	int i,b=1;
	for(i=1; i<=n;i++)
	{
		b=b*m;
	}
	return b;	
}

void printt(int n)
{
	int i,j;
	long a;
	
	for(i=1;i<=n; i++)
	{
		printf("\n");
		
		for(j=1; j<=n; j++)
		{
			
				a=power(i,j);
			    printf(" %ld ",a);
        }
		
		
	}
}
