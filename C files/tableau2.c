#include<stdio.h>
#include<stdlib.h>
int main ()
{

    int tab[3][4]={{ 1, 12, 3, 7},{ 2, 3, 4, 7},{ 2, 8, 7, 18}};
    int i,j;

    for ( i=0 ; i <3; i++)
    {
     for (j= 0;j< 4; j++)
     {
        if (tab[i][j]%2 == 0 )
        {
             printf("%4d\t",tab[i][j]);
        }
     }
     printf("\n");
    }
    


    return 0;
}