//Dichiarazione librerie
#include <stdio.h>

//Programma principale
int main()
{
	int i,j,n,prod=1,resto;
	int flag=1;
	
	puts("Dammi n");
	scanf("%d", &n);
	for(i=2;i<=n;i++)
	{
		for(j=2;j<i;j++)
		{
			
			resto=i%j;
			switch (resto)
			{
				case 0:
				flag=0;
				break;
			}
		}
		if(flag)
		{
			prod=prod*i;
		}
		flag=1;
	}
	printf("Il risultato è: %d\n", prod);	

	return 0;
}