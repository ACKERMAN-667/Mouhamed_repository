#include<stdio.h>
#include<stdlib.h>
enum mois_annee
{
    janvier, 
    fevrier,
    mars,
    avril, 
    mai, 
    juin, 
    juillet, 
    aout, 
    septembre, 
    octobre,
    novembre, 
    decembre,

};
struct date 
{
  int jour;
  enum mois_annee mois;
  int annee;

};
int main ()

{
   struct date d={12,janvier,1990};

   printf("%d-%d-%d",d.jour,d.mois+1,d.annee);
    
}
