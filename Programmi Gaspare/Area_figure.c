#include <stdio.h>

float areaCerchio(float n);
float areaQuadrato(float n);
float areaTriangolo(float b, float h);
float areaRettangolo(float b, float h);

float A;

int main()
{
    float area;
    float r, b, h;
    int a;
    
    do
    {
        printf("Di quale figura vuoi calcolare l'area?\n");
        printf("1. Cerchio\n");
        printf("2. Quadrato\n");
        printf("3. Triagnolo\n");
        printf("4. Rettangolo\n");
        
        scanf("%d", &a);
        
    }while((a < 1)||(a > 4));
    
    switch (a)
    {
        case 1:
        {
            printf("Inserisci il valore del raggio: ");
            scanf("%f", &r);
            area = areaCerchio(r);
            
            printf("L'area del cerchio è uguale a %.2f\n", area);
            
            break;
        }
            
        case 2:
        {
            printf("Inserisci il valore del lato: ");
            scanf("%f", &b);
            area = areaQuadrato(b);
            
            printf("L'area del quadrato è uguale a %.2f\n", area);
            
            break;
        }
            
        case 3:
        {
            printf("Inserisci il valore della base: ");
            scanf("%f", &b);
            printf("Inserisci il valore dell'altezza: ");
            scanf("%f", &h);
            
            area = areaTriangolo(b, h);
            
            printf("L'area del triangolo è uguale a %.2f\n", area);
            
            break;
        }
            
        case 4:
        {
            printf("Inserisci il valore della base: ");
            scanf("%f", &b);
            printf("Inserisci il valore dell'altezza: ");
            scanf("%f", &h);
            
            area = areaRettangolo(b, h);
            
            printf("L'area del rettangolo è uguale a %.2f\n", area);
            
            break;
        }
    }
    
    return 0;
}

float areaCerchio(float n)
{
    A = 3.14*n*n;
    
    return A;
    
}

float areaQuadrato(float n)
{
    A = n*n;
    
    return A;
    
}

float areaTriangolo(float b, float h)
{
    A = (b*h)/2;
    
    return A;
}

float areaRettangolo(float b, float h)
{
    A = b*h;
    
    return A;
    
}




