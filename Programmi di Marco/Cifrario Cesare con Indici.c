#include <stdio.h>

void removeSpace(char *string); //Rimuove gli spazi dalla stringa//

void cifra(char *string, int k); //Cifra il testo originale usando come chiave il valore k//

void decifra(char *string, int k); //Decifra il testo criptato usando come chiave il valore k//

int main()
{
    char frase[] = "te la ficcherei a sangue";
    int chiave;

    printf("Inserisci una chiave di cifratura: ");
    scanf("%d", &chiave);

    removeSpace(frase);
    printf("La frase senza spazi è: %s\n", frase);

    cifra(frase, chiave);
    printf("La frase cifrata è: %s\n", frase);

    decifra(frase, chiave);
    printf("La frase decifrata è: %s\n", frase);

    return 0;
}

void removeSpace(char *string){
    int i=0;
    int j;
    
    while(string[i] != '\0'){
        if (string[i] == ' '){
            for (j = i; string[j] != '\0' ; ++j)
                string[j] = string[j+1];
        }
        i++;
    }
}


void cifra(char *string, int k)
{
    int i = 0;
    while(string[i] != '\0')
    {
        if((string[i] + k <= 'z') && (string[i] + k >= 'a'))
        {
            string[i] = string[i] + k;
            i++;
        }
        else
        {
            string[i] = string[i] + k - 26;
            i++;
        }
    }

}

void decifra(char *string, int k)
{
    int  i = 0;
    while(string[i] != '\0')
    {
        if((string[i] - k <= 'z') && (string[i] - k >= 'a'))
        {
            string[i] = string[i] - k;
            i++;
        }
        else
        {
            string[i] = string[i] - k + 26;
            i++;
        }


    }

}
