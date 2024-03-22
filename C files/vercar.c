#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main ()
{

    char Chaine[25]="Ohayo Otaku";
    char Chaine1;
    int i,inc=0;
    printf("Veuillez saisir un caractère svp:\n");
    scanf("%c",&Chaine1);
    printf("Le caractère saisi est :%c\n",Chaine1);
  for ( i = 0; i < strlen(Chaine); i++)
  {
      if (Chaine[i]==Chaine1)
     {   inc++;
      }
     
  }
  printf("Le nombre total d'apparition de %c dans cette chaîne est = %d \n",Chaine1,inc);
  return 0;
 
}