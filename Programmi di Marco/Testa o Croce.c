#include <stdio.h>
#include <stdlib.h>

#define Max 100

int flip();

int main()
{
	int i,result;
	int counter=0;
	int counter1=0;
	
	for(i=0; i<Max; i++)
	{
		result=flip();
		if(result==0)
		{
			counter=counter +1;
			printf("%d)Tail\n",counter);
		}
		else
		{
			counter1=counter1 +1;
			printf("%d)Head\n",counter1);
		}
	}
	
	printf("Sono uscite %d volte Testa\n",counter1);
	printf("Sono uscite %d volte Croce\n",counter);
	
	return 0;
}


int flip()
{
	int ris;
	
	ris=rand()%2;
	
	return ris;
}
