#include <stdio.h>

void fibonacci (int n);

int main ()
{
    int x;
    
    printf("Inserisci la poszione del numero della serie che vuoi rappresentato: ");
    scanf("%d", &x);
    
   x = fibonacci(x);
   
    printf("%d", x);
    
    return 0;
    
}

int fibonacci(int n)
{
    if (n == 1)
        
        return 0;
    
    else if (n == 2)
        
        return 1;
        
      	 else
    		
        	return fibonacci (n-1) + fibonacci (n-2);
    		      
}
        
    
        
    
    
    
