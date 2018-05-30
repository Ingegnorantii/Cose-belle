#include <stdio.h>

void ricerca (int x, int y);

int main()
{
   int a,b;
    
   printf("Inserisci l'intervallo di ricerca (min max): ");
   scanf("\n%d ", &a);
   scanf("\n%d", &b);
    
   ricerca(a, b);
 
    return 0;
    
}


void ricerca(int x, int y)
{	
    char trovato = 'n';
    char segno;
    
    while(trovato = 'n')
    {
    	printf("\nHai pensato a %d? (s/n): ", (y + x)/2);
        scanf("\n%c", &trovato);    
        
        if (trovato == 's')
            break;
        
        printf("\nIl numero viene prima di %d? (</>): ", (y + x)/2);
        scanf("\n%c", &segno);
        
        if(segno == '<')
            
            y = (y + x)/2;
        
        else
            
            x = (y + x)/2;
    }
    
    printf("\nHo indovinato!!!");
    return;
}
    
