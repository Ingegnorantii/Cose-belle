#include <stdio.h>

int main () 
{
    char carattere;
   	int i, j;
    int numrighe, num_, numelem;
    
    
    numrighe = 0;
    
    while (numrighe == 0)
    {
    
        printf("Inserisci il numero di righe diverso da 0: ");
    	scanf("%d", &numrighe);
        
    }
    
    num_ = numrighe*2; // Numero di spazi //
    numelem = 1;	// Vi è almeno un elemento //
    
    for (i = 0; i<numrighe; i++) 
    {    
        for (j = 0; j <= num_; j++)
            
            printf(" ");
        
        for (j = 0; j < numelem; j++)
        {
            if (j == 0)
                
                carattere = 'A'; 		// Il primo carattere di ogni riga deve essere A //
            
            else if (j <= i)			// Se il termine j-esimo (colonna) è minore o uguale all'i-esima riga in esecuzione passa alla lettera successiva //
                
                carattere = carattere + 1; 
            
            else
                
                carattere = carattere - 1;
            
            printf(" %c", carattere);
            
        }
        
        printf("\n");
        numelem = numelem + 2;
        num_= num_ - 2;  //Sottraggo due poichè il numero degli elemnti aumenta di due, se non facessi così la piramide verrebbe sfalsata //
        
    }
        
        
              
  
    
    return 0;
    
}

        
             
        
        
