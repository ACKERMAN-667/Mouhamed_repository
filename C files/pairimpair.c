#include<stdlib.h>
#include<stdio.h>
int pairimpair( int n)
{ 

 if(n%2 == 0)
 {
    return 1;
 }
 else
 {
    return 0;
 }
 

}
int main ()
{
int n;
printf("Veuillez saisir un nombre \n");
scanf("%d",&n);

if (pairimpair(n)== 1)
{
     printf("Le nombre est pair\n");
}
else
{
    printf("Le nombre est impair \n");
}



}