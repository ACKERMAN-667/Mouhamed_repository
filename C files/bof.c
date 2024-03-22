#include<stdio.h>
#include<stdlib.h>
int main ()
{
    char t[40];
    int i,c;
    printf("veuille saisir votre nom:\n");
    scanf("%s",t);
    printf("vous vous appelez %s \n",t);
    c=0;
    while (t[c] !='\0')
    {
        c=c+1;
    
    }
    
    
printf("voici votre nom à l'envers ;\n");
    for ( i = c; i >= 0; i--)
    {
        
        printf("%c",t[i]);
    }
    
    return 0;
    
}