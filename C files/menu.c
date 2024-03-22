#include<stdio.h>
#include<stdlib.h>

int menu();

int main ()
{
    switch (menu())
    {
    case 1:
        printf("Vous avez choisi Frites\n");
        break;
    case 2:
        printf("Vous avez choisi Burger\n ");
        break;
    case 3:
        printf("Vous avez choisi Chawarma \n");
        break;
    case 4:
        printf("Vous avez choisi Hot-dog \n ");
        break;
    }
return 0;
}
int menu()
{  int choix;
    while (choix<1 || choix>4)
    {
        printf("---MENU---\n");
        printf("1. frites\n");
        printf("2. Burger\n");
        printf("3. Chawarma\n");
        printf("4. Hot-dog\n");
        printf("Veuillez Faire Votre Choix SVP\n");
        scanf("%d",&choix);
    }
    return choix;
}