#include <stdio.h>

int main () {
    
 int i,j,k;
 int numrighe, numelem;
    
 printf("Scrivi il numero di righe desiderate per costruire il triangolo di Floyd: ");
 scanf("%d", &numrighe);
   
    while(numrighe == 0) {
	 printf("Inserisci un numero diverso da zero: ");
     scanf("%d", &numrighe);
	 }
    
k=0;
numelem=1;    
    
 for(i=1; i<=numrighe; i++)
   {
     printf("%d:   ",i);
 	
     for(j=0; j<i; j++)
     {  
         k = k+1;
         printf("%d ", k);
     }
    printf("\n");
   	 numelem++;
 	}
    
  return 0;  
}
    
    
   
    
