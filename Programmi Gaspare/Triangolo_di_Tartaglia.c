
#include <stdio.h>

int main()
{
    int numrig, num_;
    int i, j;
    int a;
    
    printf("A quale riga del triangolo di Tartaglia vuoi arrivare?: ");
    scanf("%d", &numrig);
    
    num_= numrig;
    
    for (i = 0; i < numrig; i++){
    
        for (j = 0; j < num_; j++)
            
            printf(" ");
       
             
             for (j = 0; j <= i; j++){
            
                 if((j == 0) || (j == i))
                     
                     a = 1;
            	 else
                     a = a*(i-j+1)/j;
                 
                 printf(" %d", a);
             }
        
        	num_--;
        	printf("\n");
    }
                 
    return 0;
}
