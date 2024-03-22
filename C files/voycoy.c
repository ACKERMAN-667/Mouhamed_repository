#include<stdio.h>
#include<stdlib.h>
int verification ( char A)
{
  if (A == 'a' || A== 'e' || A=='o' || A=='i' || A=='u' || A=='y' )
  {
    return 1;
    }
    else
    {
        return 0;
    }
    
}
int main ()
{  int A;
    printf("Veuillez saisir un caractère svp \n");
    scanf("%c", &A);
    if (verification(A)==1)
    {
       printf("Nous avons une voyelle.\n");

    }
    else
    {
        printf("Nous avons une consomne.\n");
    }
    
    
}