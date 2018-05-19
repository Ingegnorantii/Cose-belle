#include <stdio.h>

int isPrimeRecursive(int n, int i);
void printTable ();


int main ()
{
    int num;
    
    printf("Inserisce un numero per verificare se è primo: ");
    scanf("%d", &num);

    
    if(isPrimeRecursive(num, num - 1))
    
        printf("\n%d è un numero primo\n", num);
    
    else
        
        printf("\n%d non è un numero primo\n", num);
    
    printf("\n");
    
    printTable();
    
    return 0;
    
}

int isPrimeRecursive(int n, int i)
{
    
    if (i <= 1)
    {
        
        return 1;
    }
    
    if (n % i != 0)
        
        return isPrimeRecursive(n, i - 1);
    
    else
    {
        
        return 0 ;
    }
    
    
}

void printTable()
{
    int i;
    int trovato = 0;
    
    for(i = 1; i <= 100; i++)
    {
        if(isPrimeRecursive(i, i - 1))
        {
            trovato += 1;
            printf("%5d", i);
        }
        
        if (trovato > 5)
        {
            printf("\n");
            trovato = 0;
        }
    }
    
    printf("\n");
    
    return;
}





