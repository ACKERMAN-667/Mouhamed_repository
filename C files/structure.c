#include<stdio.h>
#include<stdlib.h>
typedef struct Eleve ETU;


struct Eleve
{

    char prenom[30], nom[10], sexe[10], classe[10] ;
    int age, matricule;
};
int main ()
{
   ETU n1;
    strcpy(n1.prenom, "Serigne Mouhamed Mbacké");
    strcpy(n1.nom,"Ndiaye");
    strcpy(n1.sexe, "Masculin");
    strcpy(n1.classe, "CPS 2B");
    n1.matricule= 16424;
    n1.age=19;
  
    printf("Prénom: %s \n", n1.prenom);
    printf("Nom: %s \n", n1.nom);
    printf("Age: %d \n",n1.age);
    printf("Sexe: %s\n",n1.sexe);
    printf("Classe: %s \n",n1.classe);
    printf("Matricule %d \n",n1.matricule);
    printf("\n");
}