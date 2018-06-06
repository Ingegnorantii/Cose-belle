#include <stdio.h>

int wordCount(char *stringa);
int isSpace(char character);

int main()
{
  char frase[]= "Ciucciami la minchia XD figa";
  int ris;

  ris=wordCount(frase);
  printf("Il numero e' %d",ris);
  return 0;
}

int isSpace(char character)
{
  if(character == ' ')
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int wordCount(char *stringa)
{
  int i,j=0;
  while(*stringa != '\0')
  {
        if(isSpace(*stringa))
        {
          j++;
        }

        stringa++;
  }
  return j;
}
