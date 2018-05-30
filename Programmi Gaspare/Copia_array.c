#include <stdio.h>

#define SIZE 5

void CopyArray(int arr1[], int arr2[], int i);
void PrintArray(int arr[]);

int i; 

int main ()
{
    int array1[SIZE] = {0, 1, 2, 3, 4};
    int array2[SIZE] = {0};
    
    for(i = 0; i < 5; i++)
    {
        CopyArray(array1, array2, i);
    }
    
    PrintArray(array2);
    
    return 0;
    
}

void CopyArray(int arr1[], int arr2[], int i)
{
    arr2[i] = arr1[i];
}
    
void PrintArray (int arr[])
{
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    return;
}
    
    
    
    
    
        
   
