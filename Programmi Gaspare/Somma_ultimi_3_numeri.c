#include <stdio.h>

int main ()
{
    int c1, c2, c3, c4, c5;
    int risultato;
    
    printf("Inserisci quattro cifre");
    
    scanf("%d", &c1);
    scanf("%d", &c2);
    scanf("%d", &c3);
    scanf("%d", &c4);
  	
    scanf("%d", &c5);
    
    while (c5 != 0)
    {
      c2 = c3;
      c3 = c4;
      c4 = c5;
        
      scanf("%d", &c5);  
        
    }
        

	risultato = c2 + c3 + c4;    
    printf("%d", risultato);
    
    return 0;
    
}
