#include <stdio.h>

int isPal(char *stringa);

int main ()
{
  char parola[]="r a d a r";
  int ris;

  ris=isPal(parola);
  if(ris==1)
  printf("La parola e' un Palindromo");
  else
  printf("La parola non e' un Palindromo");
  return 0;

}

int isPal(char *stringa)
{
  int counter=0;
  int i=0;
  int j, k, z;

  for(k = 0; *(stringa + k) != '\0'; k++)
  {
    counter++;
  }

   counter--;
   z=counter;
    while(k=z/2)
    {
      while(*(stringa+i)==' ')
      i++;
      while(*(stringa+counter)==' ')
      counter--;

      if(*(stringa+i)==*(stringa+counter))
      {
      j=1;
      }
      else
      return 0;

      k++;
      i++;
      counter--;
    }
  return j;
}
