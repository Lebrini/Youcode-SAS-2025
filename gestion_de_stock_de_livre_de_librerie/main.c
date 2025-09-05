#include <stdio.h>
#include <string.h>

char titre_livre[100][100];
char auteur_livre[100][100];
double prix_livre[100];
int quantite_livre[100];
int total_de_livre = 0;
int count = 0;

void ajout_livre()
{
    int n;
    printf("entrer le nombre de book que vous pouvez entre : ");
    scanf("%d",&n);
    printf("==>>Merci d'entrer les informations suivants : \n");
    for(int i = 0; i < n;i++)
    {
            printf("\n=== Livre %d ===\n", count+1);
            printf("entrer le nom de livre : ");
            scanf("%s",&titre_livre[count]);
            printf("entrer l'auteur de livre : ");
            scanf("%s",&auteur_livre[count]);
            printf("entrer le prix de livre : ");
            scanf("%lf",&prix_livre[count]);
            printf("entrer la quantite de livre : ");
            scanf("%d",&quantite_livre[count]);
            count++;
    }

}
void aff_livre()
{
    printf("==>>voici la liste de votre livre : \n");

    if(count == 0)
    {
        printf("---------------------------------------------------------------------------------------------------------------------\n");
        printf("Pas de livre ete enregistre\n\n");
        printf("---------------------------------------------------------------------------------------------------------------------\n");

    }
    for(int i = 0; i < count;i++)
    {
        printf("---------------------------------------------------------------------------------------------------------------------\n");
        printf("le nom de livre : %s, l'auteur du livre : %s, le prix de livre : %1.lf, la quantite : %d\n\n",titre_livre[i],auteur_livre[i],prix_livre[i], quantite_livre[i]);
        printf("---------------------------------------------------------------------------------------------------------------------\n");
    }


}
void recherche_livre_per_name()
{
    char name[100];

    printf("entrer le nom de livre : ");
    scanf("%s",name);

    for(int i = 0; i < count ; i++)
    {
        if(strcmp(titre_livre[i],name)==0)
        {
            printf("---------------------------------------------------------------------------------------------------------------------\n");
            printf("le nom de livre : %s, l'auteur de texte : %s, le prix de livre : %.1lf, la quantite : %d\n\n",titre_livre[i],auteur_livre[i],prix_livre[i], quantite_livre[i]);
            printf("---------------------------------------------------------------------------------------------------------------------\n");
        }
    }
}
void update_quatite_livre()
{
    char name[100];
    int quant;
    printf("entrer le nom  de votre livre : ");
    scanf("%s",name);
    printf("entrer la nouveau quantite : ");
    scanf("%d",&quant);

    for(int i = 0; i < count; i++)
    {
        if(strcmp(titre_livre[i],name)==0)
        {
            quantite_livre[i] = quant;
        }
    }
}
void supp_livre()
{
    char name[100];
    printf("entrer le nom de votre livre pour supprimer : ");
    scanf("%s",name);

    for(int i = 0; i < count ; i++)
    {
        if(strcmp(titre_livre[i],name)==0)
        {
           for(int j = 0; j < count - 1; j++)
           {
               strcpy(titre_livre[j], titre_livre[j + 1]);
               strcpy(auteur_livre[j], auteur_livre[j + 1]);
               prix_livre[j] = prix_livre[j + 1];
               quantite_livre[j] = quantite_livre[j + 1];
           }
           count--;
              printf("Livre supprime avec succes !\n");
        }
    }
}
void total_livre()
{
    for(int i = 0; i < count; i++)
    {
        total_de_livre += quantite_livre[i];
    }
    printf("---------------------------------------------------------------------------------------------------------------------\n");
    printf("le stock total des livres trouve c'est : %d\n",total_de_livre);
    printf("---------------------------------------------------------------------------------------------------------------------\n");
}


int main()
{
    int choix;
    printf("===>>Systeme de Gestion de Stock dans une Librairie<<===\n\n");
    do{
        printf("merci de choisir parmi les fonctionnalites suivants : \n\n");
        printf("1- Ajouter un livre au stock.\n");
        printf("2- Afficher tous les livres disponibles.\n");
        printf("3- Rechercher un livre par son titre.\n");
        printf("4- Mettre a jour la quantite d'un livre.\n");
        printf("5- Supprimer un livre du stock.\n");
        printf("6- Afficher le nombre total de livres en stock.\n");
        printf("7- Exit\n");
        printf("Entrer votre choix : ");
        scanf("%d",&choix);

        switch(choix)
        {
            case 1:
                ajout_livre();
                break;
            case 2:
                aff_livre();
                break;
            case 3:
                recherche_livre_per_name();
                break;
            case 4:
                update_quatite_livre();
                break;
            case 5:
                supp_livre();
                break;
            case 6:
                total_livre();
                break;
            case 7:
                printf("exiting...\n");
                break;
            default :
                printf("aucun choix exist\n");
        }
    }while(choix != 7);
}
