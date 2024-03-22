#include<stdio.h>
#include<stdlib.h>
int main ()
{
    char c;
    
    
    printf("Veuillez saisir un caractère svp:\n");
    scanf("%c",&c);
    switch (c)
    {
    case 'a':
    case 'o':
    case 'e':
    case 'i':
    case 'u':
    case 'y':
    printf("Le caractère saisi est une voyelle");
        break;
    
    
    default:
    printf("le caractère saisi est une consonme");
        break;
    }
   
    
    
}