#include <stdio.h>

void takeBit( unsigned int, int);

int main()
{
    unsigned int n;
    int position;
    
    printf("Inserire numero: ");
    scanf("%u", &n);
    
    do
    {
        
        printf("Inserire posizione corretta: ");
      	scanf("%d", &position);
        
    }while(position < 1 || position > 31);
    
    takeBit(n, position);
    
    return 0;
    
}

void takeBit(unsigned int a, int position)
{
    int mask = 1;
    mask = mask << (position - 1);
    
    if((a & mask)
        printf("1\n");
    else
        printf("0\n");
    
}
    
