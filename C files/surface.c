#include<stdio.h>
#include<stdlib.h>
#include"surface1.h"
  int main ()
 {
   float c,h,st;
     printf("Veuillez saisir le coté de la surface de base : \n ");
     scanf("%f",&c);
    printf("Veuillez saisir la hauteur de la pyramide : \n ");
     scanf("%f",&h);
    
printf("La surface totale est :%.2f ",surface(c,h));
 }