#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main ()
{
    char classe[9]="CPS2A";
    printf("%s\n",classe);
    char memorise_classe[9];
    
    printf("Veuillez changer la classe:\n" );
    scanf("%s",memorise_classe);
    strcpy(classe,memorise_classe);
    printf("La nouvelle classe saisie est :%s\n",classe);
    return 0;
}