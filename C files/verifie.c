#include<stdio.h>
#include<stdlib.h>

int main ()
{

int n,x[100],i,c=0;
printf("Saisir la dimension du tableau \n");
scanf("%d",&n);
for ( i = 1; i <= n; i++)
{
    printf("saisir le nombre numéro %d:\n",i );
    scanf("%d",&x[i]);
}
printf("Veuillez saisir le nombre que vous voulez check svp\n");
scanf("%d",&c);




for ( i = 1; i <=n; i++)
{
 if (c==x[i])
 {
   printf("Le nombre fait partie du tableau\n\n");

else(c!=x[i]);

  printf("le nombre ne fait pas partie du tableau\n\n");
}
}

 






return 0;

}




 