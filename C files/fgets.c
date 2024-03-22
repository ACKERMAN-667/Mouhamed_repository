#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
    char nom[100];
    int i;
    printf("Veuillez saisir votre nom:\n");
    fgets(nom,100,stdin);
    printf("Le nom saisi est:%s\n",nom);
   
   for(i=0;i<strlen(nom);i++)
   {
    if(nom[i] != ' ')
    {
        i=i+1;
    }
   }
    
    printf("le nombre de mot est %d \n ",i);

    return 0;

}