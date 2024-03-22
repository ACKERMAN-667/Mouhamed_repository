#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main ()
{
    char prenom[100];
    int t;
    char np[100];
    printf("Veuillez saisir votre nom:\n");
    scanf("%s",prenom);
  
   
   
    while(strlen(prenom)>10 ){
    printf("TU AS UN NOM KM VEUILEZ DIMINUER LE NBRE DE CARACTERES SVP:\n");
    scanf("%s",np);
    strcpy(prenom,np);

    
    
    }

      printf("Welcome\n");
    
    
 
}