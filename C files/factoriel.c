#include <stdio.h>

int main()
{ 
    int n,i,s=1;
    printf("Saisir un entier:");
    scanf("%d",&n);
  for(i=1;i<=n;i++)
        s*=i;

printf("Le ! de %d vaut:%d\n",n,s);
return 0;
}
