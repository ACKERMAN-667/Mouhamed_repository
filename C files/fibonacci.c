#include<stdio.h>
#include<stdlib.h>

int fibonacci ( int n)
{
    if (n < 2)
    {
    return 1;
    }
    else
    {
    return fibonacci(n-1)+fibonacci(n-2)
    }

    

}
int main ()
{
    int n;
    printf("saisir un entier svp \n");
    scanf("%d",&n);
    printf("La suite de %d ",n,fibonacci(n));
    return 0;
} 