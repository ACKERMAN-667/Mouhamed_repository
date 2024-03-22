#include<stdio.h>
#include<stdlib.h>
int main ()
{
 int n,x[n],s=0,i;
 printf("Veuillez sasir une limite:\n");
 scanf("%d",&n);

 for ( i = 0; i <n; i++)
 {
     printf("Veuillez saisir le nombre %d \n ",i);
     scanf("%d",&x[i]);

     s=s+x[i];

    
 }
 printf("Le résultat est:%d\n",s);
 


}