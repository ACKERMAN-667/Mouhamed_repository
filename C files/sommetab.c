#include<stdio.h>
#include<stdlib.h>
int main ()
{
   
    int n,i,s ;
    printf("Veuiller saisir une limite pour le tableau: \n");
    scanf("%d",&n);
    int tab[n];
    for ( i = 1; i <= n; i++)
    {
        printf("Veuiller saisir le chiffre numéro %d svp\n",i);
        scanf("%d",&tab[i]);
    }
    printf("\n");
    for ( i = 1; i <= n; i++)
    {
       
       printf("%d\t",tab[i]);
    }

    printf("La somme est : %d\n",somme(tab,n));

    return 0;
}

int somme (int tab [], int n)
{
 
    if (n==0)
    {
      return 0;
    }
    else
    {
        return tab[n2]+somme(tab,n-1);
    }
}
   

    


