#include <stdio.h>

int main (){
    int trovato = 0;
    int a;
    int i, j;
    int s;
    
    printf("Inserisci un numero: ");
    scanf("%d", &a);
    
    printf("La somma dei numeri primi minori o uguali di %d è: ", a);
    
    s=0;
    
    for (i = a; i>1; i--)
    {	
        trovato = 1;
        
        for (j = i-1; j>1; j--)
        {	
            
            if(i%j == 0)
            {
                trovato = 0;
            }
            
        }
        
        if (trovato == 1)
        {  
            s = s+i;
            
          	printf("%d + ", i);
            
        	          
            
        }
    }
    
    printf("= %d", s);
    
    return 0;
}        
           
            
               
                
        
            
    
    
