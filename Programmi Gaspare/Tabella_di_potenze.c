#include <stdio.h>

long power (int M, int N); //Calcola M elevato a N//
void printHeading(); //Stampi la stringa "TABELLA DELLE POTENZE"//
void printTable (int n); //Stampi il valore corretto per ogni cella//

int main()
{
    int x;
    
    printf("Inserisci un valore per costruire la tabella di potenze: ");
    scanf("%d", &x);
    
    printHeading();
    printTable(x);
    
    return 0;
    
}

long power(int M, int N)
{
    int i;
    int pow = 1;
    
    for(i=1; i <= N; i++)
        pow = pow*M;
    
    return pow;
}

void printHeading()
{
    printf("TABELLA DELLE POTENZE\n");
    return;
}

void printTable (int n)
{
    int i, j;
    long val;
    
    for (i=1; i <= n; i++)
    {
        for (j=1; j <= n; j++)
        {
            val = power(i, j);
            printf("%10ld ", val);
            
        }
        
        printf("\n");
    }
    
    return;
}
