#include <stdio.h>

int power(int base, int exponent);

int main ()
{
    int a, b, c;
    
    printf("Inserisci la base: ");
    scanf("%d", &a);
    
    printf("Inserisci l'esponente: ");
    scanf("%d",&b);
    
    c = power(a, b);
    
    if(b>=0)
        
        printf("Il risultato è: %d\n", c);
    
    else
        
        printf("Il risultato è: 1/%d\n", c);
    
    return 0;
    
}

int power(int base, int exponent)
{
    if (exponent < 0)
        exponent = exponent*(-1);
    
    if (exponent == 0)
        return 1;
    
    if (exponent == 1)
        
        return base;
    
    else
        
        return base*power(base, exponent - 1);
    
}

