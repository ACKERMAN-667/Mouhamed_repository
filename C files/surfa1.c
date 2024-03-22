#include<stdio.h>
#include<stdlib.h>

float surface (float rayon1, float rayon2)
{
    float S=(3.14*rayon1*rayon1)-(3.14*rayon2*rayon2);
    return S;
}
int main ()
{  float rayon1,rayon2;
    printf("Veuillez saisir le rayon du grand cercle :\n");
    scanf("%f",&rayon1);
    printf("Veuillez saisir le rayon de la partie achurée:\n");
    scanf("%f",&rayon2);
    printf("La surface de cette surface est %.2f",surface(rayon1,rayon2));
}