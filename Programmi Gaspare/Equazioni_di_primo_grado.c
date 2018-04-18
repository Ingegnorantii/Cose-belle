#include <stdio.h>

int main()
{
    int a,b;
    
    printf("Inserire i valori di a e b per trovare il valore di x nell'equazione ax + b = 0\n");
    
    printf("a: ");
    scanf("%d",&a);
    
    printf("b: ");
    scanf("%d",&b);
    
    b = b*(-1);
  
        
        printf("x = %d/%d", b,a);
   
    
    return 0;
}
