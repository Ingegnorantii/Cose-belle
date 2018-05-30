#include <stdio.h>

#define SIZE 10

void SaveArray(int arr[]);
void PrintArray(int arr[]);

int i;

int main()
{
    int array[SIZE] = {0};
    
    printf("Inserisci 10 numeri interi:\n");
    
    SaveArray(array);
	
    printf("\n");
    
    PrintArray(array);
    
    return 0;
}

void SaveArray (int arr[])
{
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    return;
}

void PrintArray (int arr[])
{
    for(i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    return;
}
