#include <stdio.h>


int main()
{
	
    int array[8];
    int a, k;
	
	
	printf("Conversione di un decimale in binario con complemento a 2\n");
	printf("Inserisci il numero decimale da trasformare: \n");
	scanf("%d",&a);
	
	for(k=0; k<8; k++)
	{
		array[k]= a % 2;
		a = a/2;
		
	}
    
	printf("La conversione in binario è: ");
    
	for(k=7; k>=0; k--)
	{
		printf("%d", array[k]);
	}
	
    printf("\nLa rappresentazione in complemento a 1 é: ");
    
    for(k=7; k>=0; k--)
	{
		if(array[k]==0)
		{
			array[k]=1;
		}
		else
		{
			array[k]=0;
		}
		
        printf("%d", array[k]);
	}
    
      printf("\nLa rappresentazione in complemento a 2 é: ");
    
      
    for(k=0; k<8; k++)
    {
		while(array[k]==1)
        {    
		array[k]= 0;
        k++;
        }
        
        
        array[k] = 1;
        break;
    }      
	
	for(k=7; k>=0; k--)
	{
		printf("%d", array[k]);
	}
           
	
	return 0;
	
	
}
