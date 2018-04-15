//Dichiarazione librerie
#include <stdio.h>

//Programma principale
int main()
{
	int r;
	int i,j,s;
	char Let;
	do
	{
	puts("Dammi il numero di righe (Massimo 25): ");
	scanf("%d", &r);
	}
	while(r<0||r>25);
	for (i = 0; i < r; i++)
	{
		Let='@';
		for (s = i; s < r; s++)
		{
			printf(" ");
		}

		for(j = 0; j<=i; j++)
		{
			Let=Let+1;
			printf("%c", Let);
		}

		for(j = i-1; j>=0; j--)
		{
			Let=Let-1;
			printf("%c", Let);
		}
		puts("");
	}
	return 0;
}