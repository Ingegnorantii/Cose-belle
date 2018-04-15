#include <stdio.h>

int main(void){
    int n;              
    int character=1;    // la prima cifra da inserire
    int space;          // spazi da lasciare per creare la piramide
    int i,j;        	// indici per scorrere cicli for
    
    printf("Inserire numero di righe: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){

        for(space=1; space < n-i; space++){
            printf("%c", ' ');
        }

            for(j=0; j<=i; j++){
                if (j==0 || i==0)
                    character=1;
                else
                   character = character * (i-j+1) / j;
            printf(" %d",character);
        }

        printf("\n");
    }

    return 0;
}