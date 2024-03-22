#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()

{
int n ;

printf("===menu===\n");
printf("1. Naruto\n");
printf("2. Fifa\n");
printf("3. Asphalt\n");
printf("4. Avengers\n");
printf("Choisissez un nombre\n");
scanf("%d",&n);


switch (n)
{
case 1:
    printf("Vous avez choisi Naruto\n");
    break;
case 2:
printf("Vous avez choisi Fifa\n");
    break;
case 3:
printf("Vous avez choisi Asphalt\n");
    break;

case 4:
printf("Vous avez choisi Avengers\n");
    break;

default:
printf("Choix indisponible! \n");
    break;
}

return 0;
}