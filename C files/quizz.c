#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{   int g,s;
    char c[15];
   

   do
   { printf("Quelle est la superficie du Sénégal ?\n");
   scanf("%d",&s);
    
   }while (s!=196722);

    printf("Mauvaise réponse veuillez réessayer svp");
   
   
  
do
{
   printf("Quelle est la Capitale de la Russie?\n");
   scanf("%s",c);

}while (strcasecmp(c,"Moscou") != 0);

    printf("Etes vous un homme ou une femme?\n");
    printf("1. Homme   2.Femme\n");
    scanf("%d",&g);

 switch (g)
    {
    case 1:
        printf("BRAVO CHAMPION \n");
        break;
    case 2:
        printf("BRAVO CHAMPIONNE\n");
        break;
    
    default:
    printf("Choix indisponible");
        break;
    }
}