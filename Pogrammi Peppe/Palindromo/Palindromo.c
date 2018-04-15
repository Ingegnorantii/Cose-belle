//Dichiarazione librerie
#include <stdio.h>

//Programma principale
int main()
{
	int n,a,b,c,d,e,pal=0;
	printf("Dammi n\n");
	scanf("%d", &n);
	a=n%10;
	n=n/10;

	b=n%10;
	n=n/10;

	c=n%10;
	n=n/10;

	d=n%10;
	n=n/10;

	e=n%10;

	if(a==e)
	{
		if(b==d)
		{
			pal=1;
		}
	}	
	if(pal==1)
	{
		printf("Il numero è palindromo\n");
	}										
	else
	{
		printf("Il numero NON è palindromo\n");
	}
	return 0;
}