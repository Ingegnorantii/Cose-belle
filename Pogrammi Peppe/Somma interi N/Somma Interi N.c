//Dichiarazioni librerie
#include <stdio.h>

//Programma principale
int main()
{
	int n,sum=0;											//Valore
	int i;													//Contatore
	printf("Inserisci N \n");
	scanf("%d", &n);
	for(i=1;i<=n;i++)										//Ciclo per sommare
	{
		sum+=i;
	}
	printf("%d\n", sum);
	return 0;
}