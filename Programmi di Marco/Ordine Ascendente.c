#include <stdio.h>

#define SIZE 5

void printArray(int array[]); //stampa l'array//

void insert(int arr[]); //gestisce l'inerimento ordinato//

int getPosition(int [], int, int); //restituisce la posizione dell'intero più piccolo rispetto al valore inserito //

void shift(int[], int); //permette di shiftare gli elementi dell'array per fare posto al valore dell'utente //

int main ()
{
    int array[SIZE] = {0};

    printf("Inserisci 5 valori: \n");
    insert(array);
    printArray(array);
    return 0;
}

void printArray(int array[])
{
    int i;

    for (i = 0; i < SIZE; i++)
    {
        printf("\n%d", array[i]);
    }

    return;
}

void insert(int arr[])
{
    int i;
    int pos;
    int num;

    for (i=0; i < SIZE; i++)
    {
        scanf("%d", &num);

        if(i == 0)

            arr[i] = num;

        else
        {
            pos = getPosition(arr, num, i);

            shift(arr, pos);

            arr[pos] = num;
        }
    }
  return;

}

int getPosition(int array[], int n, int iterazione)
{
    int i = 0;
    int result;


    while((n > array[i]) && (iterazione != i))
    {
        i++;
    }

    result = i;

     return result;

}

void shift(int array[], int n)
{
    int i;

    for(i = SIZE - 1; i > n; i--)
    {
        array[i] = array[i-1];
    }


    return;
}
