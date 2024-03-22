#include<stdio.h>
#include<stdlib.h>

int conversion (int a)
{
    
if (a/2 != 0)
{
   conversion(a/2);
   printf("%d",a%2);
  
}
printf("\n");
}


int main ()
{
    int a;
    printf("Veuillez saisir un entier \n");
    scanf("%d",&a);
    conversion(a);
    return 0;
}