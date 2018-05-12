#include <stdio.h>

long power(int,int);
void printh();
void printt(int);

int main()
{
	int num,a=1,i,j,b=1,c=1;
	
	printf("Inserisci il numero: ");
	scanf("%ld",&num);

	
	printh();
    for(i=1;i<=num; i++)
	{
		printf("\n");
		
		for(j=1; j<=num; j++)
		{
			
			    a=power(i,j);
			    printt(a);
			
        }
		
		
	}
	
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
	printf("%d ",n);
}
