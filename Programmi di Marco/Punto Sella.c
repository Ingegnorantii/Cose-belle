#include <stdio.h>

#define SIZE 3
void PuntoSella(float [SIZE][SIZE]);
void printMatrice(float [SIZE][SIZE]);

int main()
{
    float matrice[SIZE][SIZE];
    int i, j;

    printf("Inserisci la matrice %dx%d: \n", SIZE, SIZE);

    for(i=0; i < SIZE; i++)
    {
        printf("Riga %d: \n", i + 1);

        for(j=0; j < SIZE; j++)
        {
            scanf("%f", &matrice[i][j]);

        }

        printf("\n");
    }

    printMatrice(matrice);

    PuntoSella(matrice);

    return 0;
}

void printMatrice(float m[][SIZE])
    {
        int i,j;

        for(i=0; i < SIZE; i++)
    {

        for(j=0; j < SIZE; j++)
        {
            printf("%5.2f ", m[i][j]);

        }

        printf("\n");

    }

    return;

    }

void PuntoSella(float matrice[][SIZE])
{
    int i, j;
    int k;
    int trovato;

      for(i = 0; i < SIZE; i++)
    {
        for(j= 0; j < SIZE; j++)
        {
            for(k = 0; k < SIZE; k++)
            {
                    if((matrice[i][j] > matrice[i][k]) || (matrice[i][j] < matrice[k][j])) 
                    {
                        trovato = 0;
                     break;
                  }

                  else

                  trovato = 1;
            }

                if (trovato == 1)

               printf("\n%f è un punto di sella (%d - %d)", matrice[i][j], i + 1, j + 1);
        }

     }

     return;
}
