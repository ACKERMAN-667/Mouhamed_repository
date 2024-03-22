#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{


    int n,s=0,i;

    float t[10],m=0;
    
    printf("Saisir le nombre total d'étudiants \n");
    scanf("%d",&n);
    for ( i =1; i <=n; i++)
    {
       printf("Saisir la note sur 20 de l'étudiant numéro %d \n",i);
       scanf("%f",&t[i]);
       s = s + t[i];
       m = s / n;
      
    }
     
       
       printf("La moyenne de la classe est: %f\n",m);
    return 0;
}