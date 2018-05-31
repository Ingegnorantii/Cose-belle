#include <stdio.h>


void Maggioritario(int, int);

int main()
{
    int num;
    int punt;


    printf("Inserisci il numero di elementi: ");
    scanf("%d", &num);

     punt = (int) malloc(numsizeof(int));

    Maggioritario(punt, num);

    return 0;

}

void Maggioritario(int* v, int n)
{
    int i, j;
    int result = 0;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    for(i = 0; i < n; i++)
    {
        result = 0;

        for(j = 0; j < n; j++)
        {
            if (v[i] == v[j])
            {
                result = result + 1;
            }
        }
            if(result > n/2)
            {
                printf("Il vettore è maggioritario con valore %d", v[i]);
                break;
            }

     }
 

    return;
}
