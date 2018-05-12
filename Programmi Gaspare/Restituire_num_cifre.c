#include <stdio.h>

int numCifre(int n);

int main ()
{
    int x;
    int cifre;
    
    do
    { printf("Inserisci un numero maggiore di zero: ");
        scanf("%d", &x);
    }while(x < 0);
    
    cifre = numCifre(x);
    
    
    printf("Numero di cifre = %d\n", cifre);
    
    return 0;
    
}

int numCifre(int n)
{
    int a = 1;
    
    if (n/10 == 0)
        return 1;  // caso base //
    
    else
        
        return a + numCifre(n/10);
    
}
