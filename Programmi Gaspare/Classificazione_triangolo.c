#include <stdio.h>

int main( )
{
    int a, b, c;
    int kind;
    
    printf("Inserisci la misura del primo lato\n");
    scanf("%d", &a);
    
    printf("Inserisci la misura del secondo lato\n");
    scanf("%d", &b);
    
    printf("Inserisci la misura del terzo lato\n");
    scanf("%d", &c);
    
    if(( a == b)&&(b==c))
    {
        printf("Il triangolo è equilatero\n");
        kind = 0;
    }
    
    else if ((a == b)||(b == c)||(c == a))
    {
        printf("il triangolo è isoscele\n");
        kind = 1;
    }
    
    else if((a*a == b*b + c*c)||(b*b == a*a + b*b)||(c*c==a*a + b*b))
    {
        printf("il triangolo è rettangolo\n");
        kind = 2;
    }
    
    else
    {
        printf("il triangolo è scaleno\n");
        kind = 3;
    }
   
    switch (kind)
    { case 0:
            puts ("il triangolo ha tutti i lati uguali");
            
        case 1:
            puts ("il triangolo ha due lati uguali");
            
        case 2:
            puts ("il triangolo ha un angolo di 90 gradi");
            
        case 3:
            puts ("il triangolo ha tutti i lati diversi");
    }
    
    return 0;
}



