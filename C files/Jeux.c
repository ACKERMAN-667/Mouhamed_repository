#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
    #include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
char rep1[10],rep2[10],rep3[10],rep4[10],rep5[10],rep6[10],j1[19]="Antoine Lavoisier\n",
j2[15]="paris\n",j3[15]="moscou\n",j4[15]="varsovie\n",j5[15]="athenes\n";
int n1=0,n2=0,n3=0,n4=0,n5=0,S=0;
printf("Bienvenue cher élèves de terminale\n");
printf("Première question:\n");
printf("Qui est l'auteur de la célèbre phrase \"Rien ne se perd, Rien ne se gagne, Tout ce transforme. \" \n");
fgets(rep1,10,stdin);
strlen(rep1);
while(strcasecmp(rep1,j1)==0)
{
    if
    n1=4;
}else{
    n1=0;
}
printf("Deuxième question:\n");
printf("Quelle est la capitale de la France? (5 lettres) \n");
fgets(rep2,10,stdin);
if (strcasecmp(rep2,j2)==0)
{
    n2=4;
}else{
    n2=0;
}
printf("Troisième question:\n");
printf("Quelle est la capitale de la Russie? (6 lettres) \n");
fgets(rep3,10,stdin);
if (strcasecmp(rep3,j3)==0)
{
    n3=4;
}else{
    n3=0;
}
printf("Quatrième question:\n");
printf("Quelle est la capitale de la Pologne ? (8 lettres) \n");
fgets(rep4,10,stdin);
if (strcasecmp(rep4,j4)==0)
{
    n4=4;
}else{
    n4=0;
}
printf("Cinquième question:\n");
printf("Quelle est la capitale de la Grèce ? (7 lettres) \n");
fgets(rep5,10,stdin);
if (strcasecmp(rep5,j5)==0)
{
    n5=4;
}
else{
    n5=0;
}
S=n1+n2+n3+n4+n5;
printf("Votre note est %d: \n",S);
if (S>=16 && S<=20)
{
    printf("Tres bien\n\n");
}
else
{
    if(S>=12)
    {
        printf("Passable\n\n");
    }
    else{
        printf("Mauvaise note\n\n");
    }

}



return 0;
}
}
