#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int apparition(char chaine[50],char lettre[50])
{
    int i,n=0;
    for ( i = 0; i < strlen(chaine); i++)
    {
       if (chaine[i]==lettre)
       {
       n++;
       }
       return n;
       
    }
}

    int main ()
    {
        char chaine[50],lettre;
        int nbr;
        printf("Saisir une chaine de caractère:\n");
        fgets(chaine,50,stdin);
        printf("De quel caractère voulez vous la recurrence ?:\n");
        scanf("%c",&lettre);
        nbr=apparition(chaine,lettre);
        printf("La lettre %c apparait %d fois \n",lettre,nbr);
        return 0;



    }
