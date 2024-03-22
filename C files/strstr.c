#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
    char chaine1[100]="Welcome to cps2",chaine2[100];
  printf("Veuillez saisir une chaine de caractère\n");
  fgets(chaine2,100,stdin);
  
  
  if (strstr(chaine1,chaine2 != NULL))
  {
    puts(BRAVO);
  }
  else{
    puts(ERROR);
   
  }
  return 0;

  
  
}