#include <stdio.h>
//Definire e implementare un programma c che chieda all'utente di inserire un numero intero positivo N e determini il massimo intero M
//tale che la somma dei primi M interi sia minore o uguale a N.
//Esempio: N=15 allora  M= 5 perchè 1+2+3+4+5=15; mentre 1+2+3+4+5+6= 21;
int main()
{
  unsigned int n, m, nconfronto;
  printf("%s\n", "inserire il numero n");
  scanf("%d", &n);
  nconfronto=0;
  m=0;
  while (nconfronto < n)
  {
    nconfronto= nconfronto + m;
    if (nconfronto> n)
      printf("il numero m massimo: %d", m-1);
      else if(nconfronto == n)
      printf("il numero m massimo: %d", m);
    m++;
  }
  return 0;
}
