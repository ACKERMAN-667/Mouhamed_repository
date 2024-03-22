#include<stdio.h>
#include<stdlib.h>
float imc(float poids,float taille)
{
    float imc=(poids/((taille/100)*(taille/100)));
    return imc;
}
int main ()
{
    float poids, taille;
    printf("Veuillez saisir votre poids svp :\n");
    scanf("%f",&poids);
    printf("Veuillez saisir votre taille en cm svp :\n");
    scanf("%f",&taille);
    printf("Votre IMC est de %.2f:\n",imc(poids,taille));
    if (imc(poids,taille)<18.5)
    {
       printf("Démal lek fondé sew nga trope\n");
    }
    
    if (imc(poids,taille)>18.5 && imc(poids,taille)<25)

    {
      printf("vous avez une corpulence normale\n");
    }
    if (imc(poids,taille)>25 && imc(poids,taille)<30)
    {
      printf("vous etes en surpoids \n");
    }
    if (imc(poids,taille)>30 && imc(poids,taille)<35)
    {
       printf("vous etes en obésité modéré \n");
    }
    if (imc(poids,taille)>35&& imc(poids,taille)<40)
    {
       printf("vous etes en obésité sévère \n");
    }
    if (imc(poids,taille)>40)
    {
        printf("Vous etes en obésité massive");
    }
    
    
}