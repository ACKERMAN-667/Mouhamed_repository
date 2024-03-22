#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()

{
    int n,i,z[100];
    printf("veuillez saisir la dimension please: \n");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        printf("Saisir la valeur numéro %d du tableau à dimension %d : \n",i,n);
        scanf("%d",&z[i]);
    }
    for ( i = 1; i <=n; i++)
    {
        
       printf("%d\t",z[i]);
      
    }
     printf("\n");

}