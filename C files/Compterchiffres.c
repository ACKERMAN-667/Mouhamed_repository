#include<stdlib.h>
#include<stdio.h>

int compte (int a)
{
if (a<10)
{
    return 1;
}
else
{
    return compte(a/10)+1;
}






}
int main ()
{
    int a;
    printf("Veuillez saisir un entier svp \n");
    scanf("%d,",&a);
    printf("%d",compte(a));
    return 0;
}