#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
    char chaine[100],chaine1[100];
    int i;
    printf("Veuillez saisir la chaine de caractères svp :\n");
    gets(chaine);
    printf("La chaine de caractères saisi est:\n");
    puts(chaine);
    printf("Veuillez saisir la 2e chaine de caractères svp :\n");
    gets(chaine1);
    printf("La 2e chaine de caractères saisi est:\n");
    puts(chaine1);
 
     if (strstr(chaine,chaine1)!=NULL)
     {
       printf("il y a correspondance \n");
     }
     else{
        printf("il n'y a pas correspondance \n");
     }

     while (chaine[i]!='\0')
     {
       i++;
     }
     printf("le nombre de caractère de la chaine est %d\n",i);
    return 0;
}