#include <stdio.h>

void mystrcat(char *s1,char *s2,char *result);

int main()
{
    char a[]="Suca";
    char b[]="World";
    char ris[10];

    mystrcat(a,b,ris);
    printf("Il risultato è: %s",ris);

return 0;

}

void mystrcat(char *s1,char *s2,char *result)
{


    while(*s1!='\0')
    {
        *result=*s1;
        result++;
        s1++;
    }
    while(*s2!='\0')
    {
        *result=*s2;
        result++;
        s2++;
    }
}
