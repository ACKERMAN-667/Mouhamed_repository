#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    char C1[100];
    char C2[100];
    char C3[100];
    char C4[100];
    printf("Veuillez Saisir une première chaine de caractère ? \n");
    fgets(C1,100,stdin);
    puts(C1);
    printf("Veuillez Saisir une première chaine de caractère ? \n");
    fgets(C2,100,stdin);
    puts(C2);
    strncpy(C1,C2,strlen)

}