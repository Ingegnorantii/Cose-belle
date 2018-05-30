#include <stdio.h>

#define SIZE 10

void SaveArray(int arr[]);
void ReverseArray(int arr[]);

int i;

int main()
{
    int array[SIZE] = {0};
    
    printf("Inserisci 10 numeri interi:\n");
    
    SaveArray(array);
	
    printf("\n");
    
    ReverseArray(array);
    
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

void ReverseArray (int arr[])
{
    for(i = 9; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
    
    return;
}
