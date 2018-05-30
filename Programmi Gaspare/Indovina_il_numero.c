#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int x;
    int max;
    int i;
    int trovato = 0;
    
    do
    {
        printf("\nInserisci un valore massimo > di zero: ");
        scanf("%d", &max);
        
    }while(max <= 0);
    
    num = rand()%max + 1;
    
    printf("\nIndovina il numero: ");
    scanf("%d",&x);
    
    for(i = 0; i < 10; i++)
    {
   		if(x < num)
            
            printf("\nIl numero da indovinare è più grande");
        
        else if (x > num)
            
            printf("\nIl numero da indovinare è più piccolo");
            
        else
        {
            printf("\nHai indovinato!!!");
            trovato = 1;
           	break;
        }
         printf("\nInserisci un altro valore: ");
         scanf("%d", &x);
    }
    
    if (trovato == 0)
        
        printf("\nNon hai indovinato, il valore era %d", num);
    
    return 0;
    
}
