#include<stdio.h>
#include<stdlib.h>
int main ()
{
  int  tab[100][100];
  printf()

  for (i = 1; i <= 6; i++)
  {
      for (j = 1; j <= 3; j++)
      {
          printf("Saisir le mois %d, Prix %d:\n", i, j);
          scanf("%d", &tab[i][j]);
      }
  }

  for (i = 0; i < n; i++)
  {
      for (j = 0; j < n; j++)
      {
          if (tab[i][j] % 2 == 0)
          {
              printf("%d\t", tab[i][j]);
          }
      }
      printf("\n");
  }
  }
  
}