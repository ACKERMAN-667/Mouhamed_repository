#include<stdio.h>
#include<stdlib.h>
int main ()
{
  
 int n=200,i=1,x[n],v;
 printf("Veuillez saisr une limite :\n");
 scanf("%d",&n);
 for ( i = 1; i <=n; i++)
 {
    printf("saisir l'élément numero %d du tableau \n",i);
    scanf("%d",&x[i]);
 }
for ( i = 1; i <=n; i++)
{
    
 printf("%d\t",x[i]);

}

 printf("\nveuillez saisir le nombre à supprimer :\n");
 scanf("%d",&v);
 for (i = 1; i <=n; i++)
 {
   if (x[i]==v)
   {
    x[i]=-;
printf("%d\t",x[i]);

   }
   else{
 printf("%d\t",x[i]);
 
   }
 
  
 }
 
 
 
 return 0;
}