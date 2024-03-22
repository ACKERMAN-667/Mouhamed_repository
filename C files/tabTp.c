#include<stdio.h>
#include<stdlib.h>
int main ()
{   
    int tab[6][3];
    int i,j,ja1=0,ja2=0,ja3=0,fa1=0,fa2=0,fa3=0,ma1=0,ma2=0,ma3=0,a1=0,a2=0,a3=0,mai1=0,mai2=0,mai3=0,j1=0,j2=0,j3=0;
    float sja=0,sf=0,sma=0,sa=0,smai=0,sj=0,benja=0,benf=0,benma=0,bena=0,benmai=0,benj=0;
    for ( i = 1; i <=6; i++)
    {
        for ( j = 1; j <=3; j++)
        {
           printf("Saisir le mois %d, Prix %d:\n",i,j);
           scanf("%d",&tab[i][j]);
        }
        
    }
    
     for ( i = 1; i <=6; i++)
    {
        for ( j = 1; j <=3; j++)
        {
           printf("%3d",tab[i][j]);
           ja1=2500*tab[1][1];
           ja2=3000*tab[1][2];
           ja3=4000*tab[1][3];

           fa1=2500*tab[2][1];
           fa2=3000*tab[2][2];
           fa3=4000*tab[2][3];

           ma1=2500*tab[3][1];
           ma2=3000*tab[3][2];
           ma3=4000*tab[3][3];

           a1=2500*tab[4][1];
           a2=3000*tab[4][2];
           a3=4000*tab[4][3];

           mai1=2500*tab[5][1];
           mai2=3000*tab[5][2];
           mai3=4000*tab[5][3];

           j1=2500*tab[6][1];
           j2=3000*tab[6][2];
           j3=4000*tab[6][3];




             sja=ja1+ja2+ja3;
             sf=fa1+fa2+fa3;
             sma=ma1+ma2+ma3;
             sa=a1+a2+a3;
             smai=mai1+mai2+mai3;
             sj=j1+j2+j3;


   
        }
        printf("\n");
         
    }    
        printf("Total vente pour janvier est :%f \n",sja);
        printf("Total vente pour fevrier est :%f \n",sf);
        printf("Total vente pour mars est :%f \n",sma);
        printf("Total vente pour avril est :%f \n",sa);
        printf("Total vente pour mai est :%f \n",smai);
        printf("Total vente pour juin est :%f \n",sj);
        printf("\n");
        printf("\n");

        benja=sja/4;
        benf=sf/4;
        benma=sma/4;
        bena=sa/4;
        benmai=smai/4;
        benj=sj/4;

        printf("Bénéfice pour janvier est :%f \n",benja);
        printf("Bénéfice pour fevrier est :%f \n",benf);
        printf("Bénéfice pour mars est :%f \n",benma);
        printf("Bénéfice pour avril est :%f \n",bena);
        printf("Bénéfice pour mai est :%f \n",benmai);
        printf("Bénéfice pour juin est :%f \n",benj);
    

    if ((benja>benf) && (benja>benma) && (benja>bena) && (benja>benmai) && (benja>benj))
    {
       printf("le mois le plus rentable est janvier");
   
    }
    else if((benf>a)&&)
    {
        /* code */
    }
    
    


    return 0;
}