#include <stdio.h>

int main()
{
	int i = 1; //Contatore//
    int n = 4; //Numero partecipanti//
    int id;
    int primo, secondo;
    
    float tempo_impiegato;
    
    float tempomin1 = 21, tempomin2 = 21;
    
    while(i <= n)
    {
        printf("Inserisci l'identificatore del partecipante %d: ", i);
        scanf("%d", &id);
        
        tempo_impiegato = 21;
        
        while( tempo_impiegato > 20)
        {	printf("Inserisci il tempo impiegato dal partecipante, deve essere minore o uguale a 20: ");
       	    scanf("%f", &tempo_impiegato);
        }
        
        if (tempo_impiegato < tempomin2)
        {
            if (tempo_impiegato < tempomin1)
            {
                tempomin1 = tempo_impiegato;
                primo = id;
                
            }
            else
            {    
            	tempomin2 = tempo_impiegato;
            	secondo = id;
            }
        }
        i++;
        
    }
    
    printf("\nIl primo classificato è %d con un tempo di %f\n", primo, tempomin1);
    printf("Il secondo classificato è %d con un tempo di %f", secondo, tempomin2);
    
    return 0;
}
