#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{   
    int n,i;
    char pays[100][100
    ];
    char c;
    printf("Veuillez saisir le nombre de pays à saisir:\n");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        printf("Veuillez saisir le pays numéro %d \n",i);
        scanf("%s",pays);
       /* fgets(pays,100,stdin);*/
        printf("Le pays %d saisi est %s\n",i,pays);
    }
    printf("Veullez saisir un caractère :\n");
    getchar();
    scanf("%c",&c);
    for ( i = 1; i <=n ; i++)
    {

        if (c ==pays[0][i])
        {
            printf("%s",pays[i]);
        }
      
    }
   

    
 
    
  
    

  
}