#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i;
    unsigned val, testa = 0, croce = 0;
    
    for(i = 0; i < 100; i++)
    {
        val = rand()%2;
    
        if(val)
        {
            printf("Testa\n");
            
            testa += 1;
            
        }
        else
        {
            printf("Croce\n");
            
            croce += 1;
            
        }
    }
    
    printf("\nTesta è uscita %d volte", testa);
    printf("\nCroce è uscita %d volte", croce);
    
    return 0;
    
}

 
    

