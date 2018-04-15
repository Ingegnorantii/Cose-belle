#include <stdio.h>

int main(void){
    int n;
    int i,j;                // indici per scorrere cicli for
    int k;                  // indice per calcolare il fattoriale
    int fattoriale = 1;
    int n_fact, k_fact, n_k_fact;
    int character = 1;

    printf("Inserire numero di righe: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0; j<=i; j++){
            if (j==0 || i==0)
                character=1;
            else{
                
                n_fact = 1;
                for(k=1; k<=i; k++)
                    n_fact = n_fact * k;

                k_fact = 1;
                for(k=1; k<=j; k++)
                    k_fact = k_fact * k;

                n_k_fact = 1;
                for(k=1; k<=i-j; k++)
                    n_k_fact = n_k_fact * k;

                character = n_fact/(k_fact * n_k_fact);
            }
            
            printf(" %d",character);
        }

        printf("\n");
    }
}