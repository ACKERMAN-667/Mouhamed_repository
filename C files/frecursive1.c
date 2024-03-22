#include<stdio.h>
#include<stdlib.h>

double puissance( int n, int p)

{
    if ( p == 0) 
    {
       return 1; 
    }
    return n * puissance(n, p - 1);
}
int main ()
{
    int n,p;
    printf("Veuillez saisir un entier s'il vous plait \n");
    scanf("%d",&n);
    printf("Veuillez saisir une puissance s'il vous plait \n");
    scanf("%d", &p);
    printf("%d à la puissance %d = %f",n,p,puissance(n,p));
}
