#include<stdio.h>
#include<stdlib.h>
int main ()
{
int n,i;

printf("Bienvenu dans mon nouveau jeu, vous avez 10 tentatives pour trouver le nombre secret à vous de jouer!!!\n ");
printf("veuillez saisir un nombre entre 0 et 50 svp:\n");
scanf("%d",&n);

if (n<0 || n>50)
{
   printf("ce nombre n'est pas un nombre compris entre 0 et 50 au revoir!! \n");
}
else
{
for ( i = 0; i <9 && n!= 25 && n>0 && n<50; i)
{



   
printf("veuillez saisir un nombre entre 0 et 50 svp:\n");
scanf("%d",&n);
i=i+1;

if(n==25 && i==0)
{
   printf("Vous etes un sorcier!!\n");
}

if (n==25 && i>0)
{
 printf("Bravo\n");
 }

if(n!=25 && i==9)
 {
   printf("GAME OVER\n");
 }
 
}

}
return 0;
}




