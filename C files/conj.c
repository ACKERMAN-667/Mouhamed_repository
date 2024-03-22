#include<string.h>
#include<stdio.h>
int main ()
{
    int i;
    char verbes_deuxieme_groupe[400][25] = {"abasourdir", "abatardir", "abetir", "ablatir", "abolir", "abonnir", "aboutir", "abréagir", "abrutir", "accomplir", "accourcir", "adoucir", "affadir", "affaiblir", "affermir", "affranchir", "agir", "agonir", "agrandir", "aguerrir", "ahurir", "aigrir", "alanguir", "alentir", "allégir", "alourdir", "alunir", "amaigrir", "amatir", "amerrir", "ameublir", "amincir", "amoindrir", "amollir", "amortir", "anéantir", "anoblir", "anordir", "aplanir", "aplatir", "appauvrir", "appesantir", "applaudir", "appointir", "approfondir", "arrondir", "assagir", "assainir", "asservir", "assombrir", "assortir", "assoupir", "assouplir", "assourdir", "assouvir", "assujettir", "attendrir", "atterrir", "attiédir", "avachir", "avertir", "aveulir", "avilir", "bannir", "barrir", "bâtir", "bénir", "blanchir", "blemir", "blettir", "bleuir", "blondir", "bondir", "bouffir", "brandir", "bruir", "brunir", "calmir", "candir", "catir", "chancir", "chauvir", "chérir", "choisir", "clapir", "compatir", "cônir", "convertir", "cotir", "crépir", "croupir", "débâtir", "débleuir", "décatir", "décrépir", "définir", "défléchir", "défleurir", "défraîchir", "dégarnir", "dégauchir", "déglutir", "dégourdir", "dégrossir", "déguerpir", "déjaunir", "démaigrir", "démolir", "démunir", "dénantir", "dépérir", "dépolir", "déraidir", "dérougir", "désemplir", "désenlaidir", "désépaissir", "désétablir", "désinvestir", "désobéir", "dessaisir", "dessertir", "désunir", "déverdir", "dévernir", "divertir", "doucir", "durcir", "ébahir", "éblouir", "ébroudir", "écatir", "échampir", "éclaircir", "écrouir", "effleurir", "élargir", "élégir", "embellir", "emboutir", "embrunir", "emplir", "empuantir", "enchérir", "endolorir", "endurcir", "enforcir", "enfouir", "engloutir", "engourdir", "enhardir", "enlaidir", "ennoblir", "enrichir", "ensevelir", "envahir", "épaissir", "épanouir", "époutir", "équarrir", "estourbir", "établir", "étourdir", "étrécir", "faiblir", "farcir", "finir", "fléchir", "flétrir", "fleurir", "forcir", "fouir", "fourbir", "fournir", "fraîchir", "franchir", "frémir", "froidir", "garantir", "garnir", "gauchir", "gémir", "glapir", "glatir", "grandir", "gravir", "grossir", "guérir", "hair", "havir", "hennir", "honnir", "hourdir", "huir", "infléchir", "interagir", "intervertir", "invertir", "investir", "jaillir", "jaunir", "jouir", "languir", "lotir", "louchir", "maigrir", "matir", "mégir", "meurtrir", "mincir", "moisir", "moitir", "mollir", "mugir", "munir", "mûrir", "nantir", "noircir", "nordir", "nourrir", "obéir", "obscurcir", "ourdir", "pâlir", "pâtir", "périr", "pervertir", "pétrir", "polir", "pourrir", "préétablir", "prémunir", "punir", "rabonnir", "rabougrir", "raccourcir", "racornir", "radoucir", "raffermir", "rafraîchir", "ragaillardir", "raidir", "rajeunir", "ralentir", "ramollir", "rancir", "raplatir", "rapointir", "rappointir", "rassortir", "ravilir", "ravir", "réagir", "réassortir", "rebâtir", "reblanchir", "rebondir", "rechampir", "reconvertir", "recrépir", "redéfinir", "redémolir", "réfléchir", "refleurir", "refroidir", "regarnir", "régir", "regrossir", "réinvestir", "rejaillir", "réjouir", "rélargir", "rembrunir", "remplir", "renchérir", "renformir", "repolir", "resalir", "resplendir", "ressaisir", "ressurgir", "resurgir", "rétablir", "retentir", "rétrécir", "rétroagir", "réunir", "réussir", "reverdir", "revernir", "roidir", "rondir", "rosir", "rôtir", "rougir", "rouir", "roussir", "roustir", "rugir", "saisir", "salir", "saurir", "serfouir", "sertir", "sévir", "subir", "subvertir", "superfinir", "surenchérir", "surgir", "surir", "tarir", "tartir", "ternir", "terrir", "tiédir", "trahir", "transir", "travestir", "unir", "vagir", "verdir", "vernir", "vieillir", "vioquir", "vomir", "vrombir"};
    char VERBE[25];
    int p = 0;
    do 
    {
        int i = 0;
        printf("Bonjour cher utilisateur,veuillez saisir un verbe du deuxième groupe : ");
        scanf("%s", VERBE);

        while ((strcmp(VERBE, verbes_deuxieme_groupe[i]) != 0) && (i <= 400))
            i++;

        if (i < 400)
            p= 1;
       printf("Nous sommes désolé mais ce verbe n'est pas du deuxième groupe veuillez réessayer s'il vous plait\n");

    } 
    while (p == 0);
    char Pronoms[6][12]={"Je","Tu","Il ou Elle","Nous","Vous","Ils ou Elles"};
    char Terminaisons_Present[6][10]={"is","is","it","issons","issez","issent"};
    char Terminaisons_Passe[6][10]={"is","is","it","issons","issez","issent"};
    char Terminaisons_Imparfait[6][10]={"issais","issais","issait","issions","issiez","issaient"};
    char Terminaisons_Futur[6][10]={"irai","iras","ira","irons","irez","iront"};
    int Nbr_Caractere,choix;
    Nbr_Caractere=strlen(VERBE);
    printf("\n---------------------------------------------------------------\n");
    printf("\n A quel temps simple voulez vous conjuguer le verbe : %s \n",VERBE );
    printf("\n---------------------------------------------------------------\n");
    printf("1_Présent        ||2_Imparfait        ||3_Passé Simple       ||4_Futur \n");
    printf("\n-----------------------------------------------------------------\n");
    scanf("%d",&choix);
    switch(choix)
    {
    case 1:
    	VERBE[Nbr_Caractere-2]='\0';
    for ( i = 0; i < 6; i++)
    {
        printf("%s %s%s\n",Pronoms[i],VERBE,Terminaisons_Present[i]);
    }
    break;
    case 2:
        VERBE[Nbr_Caractere-2]='\0';
    for ( i = 0; i < 6; i++)
    {
        printf("%s %s%s\n",Pronoms[i],VERBE,Terminaisons_Imparfait[i]);
    }
    break;
    case 3:
        VERBE[Nbr_Caractere-2]='\0';
    for ( i = 0; i < 6; i++)
    {
        printf("%s %s%s\n",Pronoms[i],VERBE,Terminaisons_Passe[i]);
    }
    break;
    case 4:
        VERBE[Nbr_Caractere-2]='\0';
    for ( i = 0; i < 6; i++)
    {
        printf("%s %s%s\n",Pronoms[i],VERBE,Terminaisons_Futur[i]);
    }
    break;   
    default:
    {
    printf("Choix indisponible");
    printf("\n");    
    } 
    }
    
    
    return 0;
    




}
	
	
	
