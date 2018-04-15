//Dichiarazione librerie
#include <stdio.h>

//Programma principale
int main()
{
	char n;
	puts("Inserisci un valore");
	scanf("%c", &n);
	if((n>='A')&&(n<='Z')||(n>='a')&&(n<='z'))
	{
		puts("Il valore inserito è una lettera ");
	}
	else
	{
		puts("Il valore inserito NON è una lettera");
	}
	return 0;
}