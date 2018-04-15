//Dichiarazione librerie
#include <stdio.h>

//Programma principale
int main()
{
	int riga,colonna;
	int i,j,c=0;
	puts("Dammi il numero di righe");
	scanf("%d", &riga);
	puts("Dammi il numero di colonne");
	scanf("%d", &colonna);

	for(i=0; i<riga; i++)
	{
		printf("Riga %d:	", i+1);
		for (j = 0; j < colonna; j++)
		{
			c++;
			printf("%d\t", c);
		}
		puts("");
	}

	return 0;
}