#include<stdio.h>
#include<stdlib.h>
double aire(double longueur,double largeur)
{
    return longueur*largeur;
}
int main()
{  
        printf("Le rectangle de longueur 3.5 et de largeur 2.0 a pour aire :%f\n" ,aire(3.5,2.0));
        printf("Le rectangle de longueur 4.5 et de largeur 2.5 pour aire :%f\n" ,aire(4.5,2.5));
        printf("Le rectangle de longueur 9.5 et de largeur 2.5 pour aire :%f\n", aire(9.5,2.5));
        printf("Le rectangle de longueur 15.5 et de largeur 3.0 a pour aire :%f\n", aire(15.5,3.0));
 return 0;
 }
