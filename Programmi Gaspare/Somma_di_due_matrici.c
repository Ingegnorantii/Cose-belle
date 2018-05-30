#include <stdio.h>

#define SIZE 100

void SommaMatrice(int m1[][],int m2[][],int m3[][], int n);

int main()
{
    int num;
    int i, j;
    int matrice1[SIZE][SIZE];
    int matrice2[SIZE][SIZE];
    int matrice3[SIZE][SIZE];
    
    printf("Di che ordine devono essere le matrici quadrate?: ");
    scanf("%d", &num);
    
    printf("Inserisci la prima matrice: \n");
    
    for(i=0; i < num; i++)
    {
        printf("Riga %d: \n", i + 1);
        
        for(j=0; j < num; j++)
        {	
            scanf("%d", &matrice1[i][j]);
           
        }
                  
        printf("\n");
                  
    }
                  
    printf("\nInserisci la seconda matrice: \n");
    
    for(i=0; i < num; i++)
    {
        printf("Riga %d: \n", i + 1);
        
        for(j=0; j < num; j++)
        {	
            scanf("%d", &matrice2[i][j]);
            
           
        }
                  
        printf("\n");
                  
    }
    
    SommaMatrice(matrice1, matrice2, matrice3, num);
    
    return 0;
    
}
    
    void SommaMatrice(int m1[SIZE][SIZE],int m2[SIZE][SIZE],int m3[SIZE][SIZE], int n)
    {
        int i,j;
        
        for(i=0; i < n; i++)
    {
        
        for(j=0; j < n; j++)
        {	
            m3[i][j] = m1[i][j] + m2[i][j];
            printf("%5d", m3[i][j]);
           
        }
                  
        printf("\n");
                  
    }
    
    return;

    }         
