#include<stdio.h>
#include<stdlib.h>
int main ()
{

    int tab[4][5]={{ 4,6,7,9,56},{ 1,0,67,8,9},{ 7,3,2,1,76},{5,3,2,1,0}};
    int i,j;
  printf("Voici le tableau que vous avez saisi:\n");
    for ( i=0 ; i <4; i++)
    {
     for (j= 0;j<5; j++)
     {
             printf("%5d\t",tab[i][j]);
        
     }
     printf("\n");
    }
    printf("Voici le tableau des nombres impairs que vous avez saisi:\n");
    
for ( i=0 ; i <4; i++)
    {
     for (j= 0;j< 5; j++)
     {
        if (tab[i][j]%2 != 0 )
        {
             printf("%5d\t",tab[i][j]);
        }
     }
     printf("\n");
    }
    


    return 0;
}