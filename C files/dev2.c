#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
    int tab[10][4];
    int i,j;
    float s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=7,s8=0,s9=0,s10=0,
    t1=0,t2=0,t3=0,t4=0,t5=0,t6=0,t7=0,t8=0,t9=0,t10=0,mc,sc=0,z,tmin=20,tmax=0;
    for (i = 1; i <=10; i++)
    {
       for ( j = 1; j <= 4; j++)
       {
        printf("Veuillez saisir la note numéro %d de l'étudiants %d: \n",j,i);
         scanf("%d",&tab[i][j]);}
       }

  for (i = 1; i <=10; i++)
    {
       for ( j= 1; j<=4; j++)
       {
        printf("%4d",tab[i][j]);
       }
printf("\n");
}   
for (i = 1; i<2 ; i++)
{
   for( j = 1; j<=4; j++)
   {
     s1=s1+tab[i][j];
   }
}
t1=s1/4;

printf("La moyenne de l'étudiant 1 est : %.2f \n",t1);
for (i = 2; i<3 ; i++)
{
   for( j = 1; j<=4; j++)
   {
     s2=s2+tab[i][j];
   }
}
t2=s2/4;

printf("La moyenne de l'étudiant 2 est : %.2f \n",t2);
for (i = 3; i<4 ; i++)
{
   for( j = 1; j<=4; j++)
   {
     s3=s3+tab[i][j];
   }
}
t3=s3/4;

printf("La moyenne de l'étudiant 3 est : %.2f \n",t3);
    
    for (i = 4; i<5 ; i++)
{
   for( j = 1; j<=4; j++)
   {
     s4=s4+tab[i][j];
   }
}
t4=s4/4;

printf("La moyenne de l'étudiant 4 est : %.2f \n",t4);
for (i = 4; i<5; i++)
{
   for( j = 1; j<=4; j++)
   {
     s1=s1+tab[i][j];
   }
}
t4=s4/4;

printf("La moyenne de l'étudiant 4 est : %.2f \n",t4);
for (i = 5; i<6 ; i++)
{
   for( j = 1; j<=4; j++)
   {
     s5=s5+tab[i][j];
   }
}
t5=s5/4;

printf("La moyenne de l'étudiant 5 est : %.2f \n",t5);
for (i = 6; i<7 ; i++)
{
   for( j = 1; j<=4; j++)
   {
     s6=s6+tab[i][j];
   }
}
t6=s6/4;

printf("La moyenne de l'étudiant 6 est : %.2f \n",t6);
for (i = 7; i<8 ; i++)
{
   for( j = 1; j<=4; j++)
   {
     s7=s7+tab[i][j];
   }
}
t7=s7/4;

printf("La moyenne de l'étudiant 7 est : %.2f \n",t7);
for (i = 8; i<9 ; i++)
{
   for( j = 1; j<=4; j++)
   {
     s8=s8+tab[i][j];
   }
}
t8=s8/4;

printf("La moyenne de l'étudiant 8 est : %.2f \n",t8);

for (i = 9; i<10 ; i++)
{
   for( j = 1; j<=4; j++)
   {
     s9=s9+tab[i][j];
   }
}
t9=s9/4;

printf("La moyenne de l'étudiant 9 est : %.2f \n",t9);
for (i = 10; i<11 ; i++)
{
   for( j = 1; j<=4; j++)
   {
     s10=s10+tab[i][j];
   }
}
t10=s10/4;

printf("La moyenne de l'étudiant 10 est : %.2f \n",t10);


sc=t1+t2+t3+t4+t5+t6+t7+t8+t9+t10;
mc=sc/10;
printf("La moyenne de la classe est: %f\n",mc);




 
 return 0;
}


