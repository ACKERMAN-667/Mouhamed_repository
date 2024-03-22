#include<stdio.h>
#include<stdlib.h>
float vitesse (float temp)
{ 
   
  float v=331.3+0.6*temp;

    return v;
}
int main ()
{ 
    float temp;
    printf("Veuillez saisir la température:\n");
    scanf("%f",&temp);
    printf("la vitesse est du son à la température %.2f est %.2f: \n",temp,vitesse(temp));
}