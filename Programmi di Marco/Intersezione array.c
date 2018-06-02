#include <stdio.h>

#define SIZE 30

void Confronto(int array1[], int array2[],int ,int);

int main()
{
	int i, j,num1,num2;
	int ris[SIZE],ris2[SIZE];
	
	do
	{
	printf("Inserisci il numero(Massimo 30)");
	scanf("%d",&num1);
    }
    while((num1<1)||(num1>SIZE));
    
	printf("Inserisci i numeri:");
    for(i=0; i<num1; i++)
    {
    	scanf("\n%d",&ris[i]);
    	
	}
    
    do
	{
	printf("Inserisci il numero(Massimo 30)");
	scanf("%d",&num2);
    }
    while((num2<1)||(num2>SIZE));
    
	printf("Inserisci i numeri:");
    for(i=0; i<num2; i++)
    {
    	scanf("\n%d",&ris2[i]);
    	
	}
	Confronto(ris,ris2,num1,num2);
    
	return 0;
}


void Confronto(int array1[],int array2[],int n,int n2)
{
	int i, j,k=0;
	int array3[SIZE];
	
	for(i=0;i<n;i++)
	{
		for(j=0; j<n2; j++)
		{
			if(array2[j]==array1[i])
			{
			   	array3[k]=array1[i];
				k=k+1;
			}
		}
	}
   
   for(i=0;i<k;i++)
   {
   	printf("%d",array3[i]);
   }
	return;
}
