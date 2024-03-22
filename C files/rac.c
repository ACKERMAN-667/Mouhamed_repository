#include<stdio.h>
#include<stdlib.h>
#include<

float r_c(float X)
{   
  
    return sqrt(X);
}
int main ()
{
    float X;
    printf("Veuillez saisir un nombre svp:\n");
    scanf("%f",&X);
    printf("La racine carré de %f est:\t %f",X,r_c(X));
    return 0;
}