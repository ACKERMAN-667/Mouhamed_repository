#include <stdio.h>
#include <stdlib.h>
typedef struct Cin CIN;

struct Cin
{

    char prenoms[30], nom[10], sexe[10], classe[10], lieu_naiss[10], adresse[20];
    int age,telephone,taille,jours_naiss,mois_naiss,annee_naiss;
};
int main()


{
    /*char prenoms[30], nom[10], sexe[10], classe[10], lieu_naiss[10], adresse[20];
    int age, telephone, taille, jours_naiss, mois_naiss, annee_naiss;*/
  CIN n1;
    printf("Veuillez saisir votre prénoms svp:\n");
    scanf("%s",n1.prenoms);
    printf("Veuillez saisir votre nom svp:\n");
    scanf("%s",n1.nom);
    printf("Veuillez saisir votre sexe svp:\n");
    scanf("%s", n1.sexe);
    printf("Veuillez saisir votre classe svp:\n");
    scanf("%s", n1.classe);
    printf("Veuillez saisir votre lieu de naissance svp:\n");
    scanf("%s", n1.lieu_naiss);
    printf("Veuillez saisir votre adresse svp:\n");
    scanf("%s", n1.adresse);
    printf("Veuillez saisir votre jour de naissance svp:\n");
    scanf("%d",& n1.jours_naiss);
    printf("Veuillez saisir votre mois de naissance svp:\n");
    scanf("%d",& n1.mois_naiss);
    printf("Veuillez saisir votre année de naissance svp:\n");
    scanf("%d", & n1.annee_naiss);
    printf("Veuillez saisir votre taille svp:\n");
    scanf("%d", & n1.taille);
    printf("Veuillez saisir votre numéro de téléphone svp:\n");
    scanf("%d", & n1.telephone);
    printf("Veuillez saisir votre age svp:\n");
    scanf("%d", & n1.age);

   

    printf("Prénom: %s \n", n1.prenoms);
    printf("Nom: %s \n", n1.nom);
    printf("Age: %d \n", n1.age);
    printf("Sexe: %s\n", n1.sexe);
    printf("Classe: %s \n", n1.classe);
    printf("Adresse: %s\n", n1.adresse);
    printf("Téléphone: %d \n", n1.telephone);
    printf("Lieu de naissance :%s \n", n1.lieu_naiss);
    printf("Jour de naissance :%d \n", n1.jours_naiss);
    printf("Mois de naissance :%d \n", n1.mois_naiss);
    printf("Année de naissance :%d \n", n1.annee_naiss);
    printf("Taille :%d\n", n1.taille);
    printf("\n");
}