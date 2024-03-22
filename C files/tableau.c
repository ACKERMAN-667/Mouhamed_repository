#include<stdio.h>
#include<stdlib.h>
int main ()

{ 
    int n, x[n],s=0,i;

    printf("Saisir une limite :\n ");
    scanf("%d",&n);
    
    for ( i = 0; i < n; i++)
    {
        printf("Saisir le nombre numéro %d svp :\n ", i);
        scanf("%d",&x[i]);

        s = s + x[i];
    }
    
    printf ("Le résultat est : %d \n", s);
    
    return 0;

}