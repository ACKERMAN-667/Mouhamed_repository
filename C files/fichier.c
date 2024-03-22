#include<stdio.h>


int main ()
{
    FILE *fichier;
    fichier = fopen("test.txt", "r");
    if(fichier==NULL)
    {
        printf("Impossible d'ouvrir le fichier.");
        return 1;

    }
    fclose(fichier);
    return 0;
    
    
    
    

}