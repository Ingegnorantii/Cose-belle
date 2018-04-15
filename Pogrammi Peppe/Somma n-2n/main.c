//Dichiarazione librerie
#include <stdio.h>

//Programma principale
int main()
{
	int sum=0,n;							//Valori
	int i;									//Contatori
	printf("Dammi n\n");
	scanf("%d", &n);
	if(n<0)
	{
		for (i = (2*n); i <= n; i++)
		{
			sum=sum+i;
		}
	}
	else
	{
		for (i = n; i <= (2*n); i++)
		{
			sum=sum+i;
		}
	}
	printf("La somma è: %d", sum);
	return 0;
}