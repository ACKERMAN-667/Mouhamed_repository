#include<stdio.h>

int main ()
{
    FILE *fichier;
    char chaine[100];
    fichier = fopen("test.txt", "r");
    if(fichier==NULL)
    {
        printf("Impossible d'ouvrir le fichier.");
        return 1;

    }
    while(fgets(chaine,100,fichier) != NULL){
        printf("%s",chaine);
    }
    
    fclose(fichier);
    return 0;
    
    

}