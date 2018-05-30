#include <stdio.h>

#define SIZE 10

void max_min(int array []);
int main()
{
    int i;
    int array[SIZE];
    
    printf("Inserisci 10 valori: \n");
    
    for(i=0; i<10; i++)
    {
        scanf("%d", &array[i]);
        
    }
    
    max_min(array);
    
    return 0;
    
}

void max_min(int array [])
{
    int max, min;
    int k;
    
    max = array[1];
    min = array[1];    
    
    
    for(k = 1; k < 10; k++)
    {
        if(max < array[k])
            
            max = array[k];
    }
    
    printf("\nIl valore più grande è: %d", max);
    
    for(k = 1; k < 10; k++)
    {
        if(min > array[k])
            
            min = array[k];
    }
    
    printf("\nIl valore più piccolo è: %d", min);
    
    return;
}
