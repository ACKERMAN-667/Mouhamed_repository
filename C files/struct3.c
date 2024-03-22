#include<stdio.h>
#include<stdlib.h>
struct affichage
{
    int heure, minutes;
};
int main ()
{
    struct affichage h1;
    printf("Veullez saisir l'heure svp \n");
    scanf("%d",&h1.heure);
    printf("Veullez saisir les minutes svp \n");
    scanf("%d", &h1.minutes);
    if (h1.heure>10)
    {
        printf("")
    }
    
}
