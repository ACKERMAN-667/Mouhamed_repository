#include<stdlib.h>
#include<string.h>
int main ()
{
    char c1[10];
    char c2[10];
    printf("Veuillez saisir le premier chaine de caractères:\n");
    scanf("%s",c1);
    printf("Veuillez saisir le deuxième chaine de caractères:\n");
    scanf("%s",c2);
    
    if (strcmp(c1,c2)==0)
    {
        printf("BRAVO\n");
    }
    else
    {
        printf("ERROR\n");
    }
    return 0;
    
}
