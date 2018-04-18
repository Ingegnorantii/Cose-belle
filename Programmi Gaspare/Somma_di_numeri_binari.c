#include <stdio.h>

int main ()
{   int sequenza1[8];
    int sequenza2[8];
    int risultato[8];
    
    int k;
    int c;  // Variabile che tiene conto del riporto //
    
    printf("Inserisci il primo numero\n");
    
    for (k=0; k<8; k++)
    {   scanf("%d", &sequenza1[k]);
        if ((sequenza1[k] != 0) && (sequenza1[k] != 1))
        {
            printf("Inserisci un numero binario\n");
            k--;
        }
    }
    
    printf("Inserisci il secondo numero\n");
    
    for (k=0; k<8; k++)
    {   scanf("%d", &sequenza2[k]);
        if ((sequenza2[k] != 0) && (sequenza2[k] != 1))
        {
            printf("Inserisci un numero binario\n");
            k--;
        }

    }
    
    c = 0;
    k = 0;
    
    for (k=0; k<8; k++)
    {
        switch(c)
        {   case 0:
                {
                    if ((sequenza1[k] == 1)&&(sequenza2[k] == 1))
                    {
                        risultato[k] = 0;
                        c = 1;                     
                    }
                    
                    else
                    {
                        c = 0;
                        risultato[k] = sequenza1[k] + sequenza2[k];                        
                    }
                    
                    break;
                }
         
            case 1:
                    {
                        if ((sequenza1[k] == 1)&&(sequenza2[k] == 1))
                        {
                            risultato[k] = 1;
                            c = 1;                          
                        }
                        
                        else if ((sequenza1[k] == 1) || (sequenza2[k] == 1))
                        {
                            risultato[k] = 0;
                            c = 1;
                         
                        }
                        
                        else
                        {      c = 0;
                             risultato [k] = 1;
                        
                        }
                        
                        break;
                    }
                
                        
                        
        }
        

    }
    
    if (c == 1)
        printf("\nLa somma ha portato un overflow\n");
    else
    {
        
        printf("La somma non ha portato overflow, il risultato è:\n");
               
    
        for (k=0; k<8; k++)
    
        {
            printf("%d", risultato[k]);
        }
    }
    
    
    
    
    return 0;
}
