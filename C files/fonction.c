#include<stdio.h>
#include<stdlib.h>
int triple(int nombre)
{
    return 3*nombre;
}
int main()
{ 
    int nombre = 0 ,nombretriple = 0;
    printf("Saisir un nombre\n");
    scanf("%d",&nombre);
    nombretriple = triple(nombre);
    printf("le triple de %d est : %d\n",nombre,nombretriple);
    return 0;
}

    