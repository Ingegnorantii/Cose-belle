#include <stdio.h>

#define Max 100
#define Min 1

void isPrimeRecursive(int a,int b);

void printTable();

int main()
{
	int num,counter;
	
	printf("Inserisci il numero: ");
	scanf(" %d",&num);
	if(num==1)
	{
		printf("Il numero %d inserito e' primo ",num);
		printTable();
		return 0;
	}
	counter=num-1;
	isPrimeRecursive(num,counter);
	
	printTable();
	
	
	
return 0;	
}



void isPrimeRecursive(int a,int b)
{
	
	
	
	if((a%b==0)&&(b!=Min))
    {
		printf("\nIl numero inserito non e'primo");
		return;
	}
	else
	{
	  if(b==Min)
	  printf("Il numero %d inserito e' primo ",a);
	  else
	  return isPrimeRecursive(a,b-1);	
	
	}	
	
	
}

void printTable()
{
	int i,j;
	printf("\n1");
	for(i=Min;i<Max;i++)
	{
	
		for(j=i-1;j>=1;j--)
		{
			if((i%j==0)&&(j!=Min))
			{
			break;
		    }
			else
			{
			 if(j==Min)
			 printf(" %d",i);
		     else
		     printf("");
			}
		}
	}
}
