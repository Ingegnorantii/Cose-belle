//Dichiarazioni librerie
#include <stdio.h>

//Programma principale
int main()
{
	//Dati
	int riga;
	//Contatori
	int i=0,j=0,c=0;
	//Fase input
	puts("Inserisci la riga");
	scanf("%d", &riga);
	//Elaborazione
	for(i=0;i<riga;i++)					//Ciclo for Righe
	{
		printf("%d:		", i+1);
		for(j=0;j<=i;j++)				//Ciclo for Colonne
		{
			printf("%d   ", c+1);
			c++;
		}
		printf("\n");
	}

	return 0;
}