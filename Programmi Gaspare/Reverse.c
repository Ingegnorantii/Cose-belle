#include <stdio.h>

void Reverse(int x);
void Binary(unsigned int n);
    
int main()
{
    int n;
    
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    
    printf("\nIl valore rovesciato di: \n");
    
    Binary(n);
    
    printf(" è = ");
    Reverse(n);
    
    return 0;
}

void Reverse (int x)
{
    unsigned int mask, curs;
    int i;
    
    mask = 0;
    
    for(i = 0; i< 31; i++)
    {	
        curs = x >> i;
    	curs = curs << 31;
        curs = curs >> i;
        
        mask = mask | curs;
        
    }
    
    Binary(mask);
    
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
