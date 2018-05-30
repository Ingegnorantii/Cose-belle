#include <stdio.h>

void Binary(unsigned int n);

void AND(unsigned int x,unsigned int y);
void OR(unsigned int x,unsigned int y);
void XOR(unsigned int x, unsigned int y);
void COMP(unsigned int x, unsigned int y);

int main ()
{
    unsigned int a, b;
    
    printf("Inserisci il primo valore: ");
    scanf("%d", &a);
    
        printf("\nInserisci il secondo valore: ");
        scanf("%d", &b);
    
    printf("\n%d = ",a);
    Binary(a);
    
    printf("\n%d = ",b);
    Binary(b);

    printf("\n\nAND tra i due valori = ");
    
    AND(a, b);
    
    printf("\n\nOR tra i due valori = ");
    
    OR(a, b);
    
    printf("\n\nXOR tra i due valori = ");
    
    XOR(a, b);
    
    printf("\n\nIl complemento a due del primo valore = ");
    
    COMP(a, b);
    
    
    
    return 0;
    
}
           
void Binary(unsigned int n)
    {
        int i;
        int mask;
        
        mask = 1 << 31;
        
        for(i = 1; i <= 32; i++)
        {
            if((n & mask) == 0 )
                
                printf("0");
            
            else
                
                printf("1");
            
            n = n << 1;
            
            if(i % 8 == 0)
                
                printf(" ");
        }
        
        return;
    }

void AND(unsigned int x,unsigned int y)
{
    int result;
    
    result = x&y;
    
    Binary(result);
    
}

void OR(unsigned int x,unsigned int y)
{
    int result;
    
    result = x|y;
    
    Binary(result);
    
}

void XOR(unsigned int x,unsigned int y)
{
    int result;
    
    result = x^y;
    
    Binary(result);
    
}

void COMP(unsigned int x,unsigned int y)
{
    x = ~x + 1;
    
    Binary(x);
    
    
}
