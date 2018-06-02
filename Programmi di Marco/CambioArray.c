#include <stdio.h>

#define SIZE 20

void CambioArray(int array[],int n);

int main()
{
	int num,ris[SIZE],i;
	
	do
	{
	printf("Inserisci il numero(Massimo 20)");
	scanf("%d",&num);
    }
    while((num<1)||(num>SIZE));
    
	printf("Inserisci i numeri:");
    for(i=0; i<num; i++)
    {
    	scanf("\n%d",&ris[i]);
    	
	}
    CambioArray(ris,num);
	return 0;	
}

void CambioArray(int array[],int n)
{
	int arr2[SIZE],i,j,k,set=0;
	for(i=0;i<n;i++)
	{
		
			if(array[i]==0)
			set=0;
			else
			{
				for(j=i-1;j>=0;j--)
			    {	
		           if(array[i]==array[j])
		           {
		            set=1;
			       }
				}
			    if((set!=1)&& (array[i]!=0))
			    {
			    	arr2[k]=array[i];
			    	k++;
			    	
				}
			}
		
	}
	
	for(i=0; i<k;i++)
	{
		printf("%d",arr2[i]);
	}
}
