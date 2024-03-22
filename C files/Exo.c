#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main ()
{
char rep1[20],rep2[20],rep3[20],rep4[20],rep5[20],rep6[20];
printf(" Bienvenu, cher élève de la classe de terminale\n");
printf("--------------------Mathématiques-----------------------\n");
printf("Première question:\n");
printf("Quelle est la fonction réciproque à la fonction logarithmique?\n");
gets(rep1);
while (strcasecmp(rep1,"exponentielle")!=0)
{
    if (strlen(rep1)>13)
{
    printf("Mauvaise réponse. \n Veuillez réessayer avec moins de caractères svp: \n");
    gets(rep1);
}

if(strlen(rep1)<13)
{
    printf("Mauvaise réponse. \n Veuillez réessayer avec plus de caractères svp: \n");
    gets(rep1);
}
else{
     printf("Mauvaise réponse. \n Veuillez réessayer avec le même nombre de caractères svp: \n");
     gets(rep1);

}
}

printf("Deuxième question:\n");
printf("Qui est le père de la relativité générale ?\n");
gets(rep2);
while (strcasecmp(rep2,"Albert Einstein"))
{   if (strlen(rep2)>15)
{
    printf("Mauvaise réponse. \n Veuillez réessayer avec moins de caractères svp: \n");
    gets(rep2);
}

if(strlen(rep2)<15)
{
    printf("Mauvaise réponse. \n Veuillez réessayer avec plus de caractères svp: \n");
    gets(rep2);
}
else{
     printf("Mauvaise réponse. \n Veuillez réessayer avec le même nombre de caractères svp: \n");
     gets(rep2);

}
   
}
printf("--------------------Sciences-Physique--------------------------\n");
printf("Première question:\n");
printf("Comment s'appelle la réaction chimique qui permet d'avoir du savon? \n");
gets(rep3);
while(strcasecmp(rep3,"Saponification"))
{
    if (strlen(rep3)>14)
{
    printf("Mauvaise réponse. \n Veuillez réessayer avec moins de caractères svp: \n");
    gets(rep3);
}

if(strlen(rep3)<14)
{
    printf("Mauvaise réponse. \n Veuillez réessayer avec plus de caractères svp: \n");
    gets(rep3);
}
else{
     printf("Mauvaise réponse. \n Veuillez réessayer avec le même nombre de caractères svp: \n");
     gets(rep3);

}  
}
printf("Deuxième question \n");
printf("Quel physicien a établi le principe d'incertitude? \n");
gets(rep4);
while(strcasecmp(rep4,"Heisenberg"))
{
    if (strlen(rep4)>10)
{
    printf("Mauvaise réponse. \n Veuillez réessayer avec moins de caractères svp: \n");
    gets(rep4);
}

if(strlen(rep4)<10)
{
    printf("Mauvaise réponse. \n Veuillez réessayer avec plus de caractères svp: \n");
    gets(rep4);
}
else{
     printf("Mauvaise réponse. \n Veuillez réessayer avec le même nombre de caractères svp: \n");
     gets(rep4);

}  
}
printf("--------------------Sciences de la Vie et de la Terre--------------------------\n");
printf("Première question:\n");
printf("Comment s'appelle le phénomène du ralentissement de la pression cardiaque? \n");
gets(rep5);
while(strcasecmp(rep5,"Bradycardie"))
{
    if (strlen(rep5)>11)
{
    printf("Mauvaise réponse. \n Veuillez réessayer avec moins de caractères svp: \n");
    gets(rep5);               
}

if(strlen(rep5)<11)
{
    printf("Mauvaise réponse. \n Veuillez réessayer avec plus de caractères svp: \n");
    gets(rep5);
}
else{
     printf("Mauvaise réponse. \n Veuillez réessayer avec le même nombre de caractères svp: \n");
     gets(rep5);

}  
}
printf("Deuxième question \n");
printf("Quelle est la membrane située entre la pie-mère et la dure-mère  \n");
gets(rep6);
while(strcasecmp(rep6,"arachnoide"))
{
    if (strlen(rep6)>10)
{
    printf("Mauvaise réponse. \n Veuillez réessayer avec moins de caractères svp: \n");
    gets(rep6);
}

if(strlen(rep6)<10)
{
    printf("Mauvaise réponse. \n Veuillez réessayer avec plus de caractères svp: \n");
    gets(rep6);
}
else{
     printf("Mauvaise réponse. \n Veuillez réessayer avec le même nombre de caractères svp: \n");
     gets(rep6);

}  
}

printf("Félicitations,tu auras le bac mon frère!!!\n in shaa allah. \n Au revoir et bonne chance!! \n");

return 0;
}