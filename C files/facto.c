#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n,i,r=1;
    printf("Veuillez saisir un nombre svp:\n");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {   
        r=r*i;
        
    }
    printf("le factoriel de %d est %d au revoir",n,r);
    return 0;

}