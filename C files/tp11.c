#include<stdio.h>
#include<string.h>
int main ()
{
    char c1[100];
    int i=0;
    printf("Veuillez saisir une chaine de caractère:\n");
    gets(c1);
    printf("La chaine de caractère saisie est %s:\n",c1);
     while(c1[i] != '\0')
  {
     i++;
      
      
  }  
  printf("Le nombre total de mots dans cette chaîne est = %d\n", i);
    
}