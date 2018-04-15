//Dichiarazione librerie
#include <stdio.h>

//Programma principale
int main()
{
	int c=0,n,sum=0;
	int jail=1;
	do
	{
		puts("Dammi il numero (0 per terminare)");
		scanf("%d", &n);
		sum=sum+n;
		if(n==0)
		{
			if(c<4)
			{
				puts("Non hai inserito almeno 4 numeri, non puoi ancora terminare");
			}
			else
			{
				printf("La somma tra i numeri è: %d\n", sum);
				return 0;
			}
		}
		if(n!=0)
		{
			c++;
		}
	}
	while(jail);
}