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
		for (int space = i; space < riga; space++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)				//Ciclo for Colonne
		{
			if(j==0||j==i)
			{
				printf("1 ");
				c=1;
			}
			else
			{	
			c=c*(i-j+1)/j;
			printf("%d ", c);
			}
			
		}
		printf("\n");
	}
	//Fine programma
	return 0;
}