#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
    int tab[10][4];
    int i,j,s=0;
    for (i = 1; i <=4; i++)
    {
       for ( j = 1; j <= 3; j++)
       {
        
         scanf("%d",&tab[i][j]);
         
        
      
        }
       }
    
    
  printf("Voici le tableau :\n");
for (i = 1; i <=4; i++)
    {
       for ( j= 1; j<=3; j++)
       {
        printf("%3d",tab[i][j]);
        
    
       }
printf("\n");
}
for (i = 1; i <=4; i++)
    {
       for ( j= 1; j <=3; j++)
       {
        s=s+tab[i][j];
        
    
       }

}

printf("La somme est %d \n",s);


return 0;
}
