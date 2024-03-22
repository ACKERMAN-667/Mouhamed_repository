#include<stdio.h>
#include<stdlib.h>

int somme (int n)
{

  if (n==0)
  {
    return 0;
  }
  else

  {
      return n+somme(n-1);
  }
}

int main()
{
int n;
printf("Saisir un entier:\n");
scanf("%d",&n);
printf("La valeur de l'entier allant de 1 à %d est %d",n,somme(n));
return 0;
}