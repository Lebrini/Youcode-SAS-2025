#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contacts{

    char nom[100];
    char phone[100];
    char email[100];
};

struct Contacts contact[100];

int count = 0;
void add_contact(){
    int n;
    printf("======>>Merci D'entree les Informations Suivants : <<======\n");
    printf("Entre le Nombre de Contacts Que Vous Pouvez Entrer : ");
    scanf("%d",&n);

    int i = 0;
    while(i < n)
    {
        printf("------------------------------------------------------------\n");
        printf("Entrer les informations du contact %d :\n", i+1);
        printf("Entrer le Nom de Votre Contact : ");
        scanf("%s", contact[count].nom);

        printf("Entrer le Numero de Telephone de Votre Contact : ");
        scanf("%s", contact[count].phone);

        if(strlen(contact[i].phone) > 10 || strlen(contact[i].phone) < 10)
        {
            printf("Numero Invalid\n");
            break;
        }
        printf("Entrer l'adress mail de Votre Contact : ");
        scanf("%s", contact[count].email);
        printf("------------------------------------------------------------\n");
        count++;
        i++;
    }
}

void modif_contact() {
    if (count == 0) {
        printf("------------------------------------------------------------\n");
        printf("Aucun Contact Existe\n");
        printf("------------------------------------------------------------\n");
    }

    char nom_mod[50];
    printf("Liste des Contacts : \n");
    for (int i = 0; i < count; i++) {
        printf("------------------------------------------------------------\n");
        printf("- Le Nom : %s , Le Telephone : %s , L'email : %s \n", contact[i].nom, contact[i].phone, contact[i].email);
        printf("------------------------------------------------------------\n");
    }

    printf("Entrer le Nom du Contact a Modifier : ");
    scanf("%s", nom_mod);

    for (int i = 0; i < count; i++) {
        if (strcmp(contact[i].nom, nom_mod) == 0) {
            printf("Entrer les nouvelles informations du contact %s :\n", nom_mod);

            printf("Entrer le Nom de Votre Contact : ");
            scanf("%s", contact[i].nom);

            printf("Entrer le Numero de telephone de Votre Contact : ");
            scanf("%s", contact[i].phone);

            printf("Entrer l'adress mail de Votre Contact : ");
            scanf("%s", contact[i].email);

            printf("------------------------------------------------------------\n");
            printf("Le Contact a ete modifie avec succes.\n");
            printf("------------------------------------------------------------\n");
        }
    }

    printf("------------------------------------------------------------\n");
    printf("Aucun Contact trouve avec le nom %s\n", nom_mod);
    printf("------------------------------------------------------------\n");
}

void aff_contact()
{
    if(count == 0)
    {
        printf("------------------------------------------------------------\n");
        printf("Aucun Contact Existe\n");
        printf("------------------------------------------------------------\n");
    }
    int j = 0;
    while(j < count)
    {
        printf("------------------------------------------------------------\n");
        printf("%d - Le Nom : %s , Le Telephone : %s , L'email : %s \n",j+1,contact[j].nom, contact[j].phone, contact[j].email);
        printf("------------------------------------------------------------\n");
        j++;
    }
}

void supp_contact() {
    if (count == 0) {
        printf("------------------------------------------------------------\n");
        printf("Aucun Contact a Supprimer\n");
        printf("------------------------------------------------------------\n");
    }

    char nom_supp[50];
    printf("Liste des Contacts : \n");
    for (int i = 0; i < count; i++) {
        printf("------------------------------------------------------------\n");
        printf("- Le Nom : %s , Le Telephone : %s , L'email : %s \n", contact[i].nom, contact[i].phone, contact[i].email);
        printf("------------------------------------------------------------\n");
    }

    printf("Entrer le Nom du Contact a Supprimer : ");
    scanf("%s", nom_supp);

    for (int i = 0; i < count; i++) {
        if (strcmp(contact[i].nom, nom_supp) == 0) {
            // Décalage des contacts vers la gauche
            for (int j = i; j < count - 1; j++) {
                contact[j] = contact[j + 1];
            }
            count--;

            printf("------------------------------------------------------------\n");
            printf("Le Contact '%s' a ete Supprime avec succes.\n", nom_supp);
            printf("------------------------------------------------------------\n");
        }
    }

    printf("------------------------------------------------------------\n");
    printf("Aucun Contact trouve avec le nom %s\n", nom_supp);
    printf("------------------------------------------------------------\n");
}

void recherche_contact(){
    if(count == 0)
    {
        printf("------------------------------------------------------------\n");
        printf("Aucun Contact Existe\n");
        printf("------------------------------------------------------------\n");
    }

    char ser_name[50];
    printf("Entrer le Nom du Contact a Rechercher : ");
    scanf("%s",ser_name);

    for(int i = 0; i < count; i++)
    {
        if(strcmp(contact[i].nom, ser_name) == 0)
        {
                printf("------------------------------------------------------------\n");
            printf("Trouve : %d - Le Nom : %s , Le Telephone : %s , L'email : %s \n",i+1,contact[i].nom, contact[i].phone, contact[i].email);
                printf("------------------------------------------------------------\n");
            break;
        }else{
            printf("------------------------------------------------------------\n");
            printf("Contact Non Trouve\n");
            printf("------------------------------------------------------------\n");
            break;
        }
    }

    
}
int main()
{
    int choix;
    printf("==========<<<<<<Systeme de Gestion de Contacts>>>>>>==========\n");

    do{
        printf("=======>>>>Merci de Choisir une fonction parmi les fonctionnalites suivantes : <<<<=======\n");
        printf("1- Ajouter un Contact\n");
        printf("2- Modifier un Contact\n");
        printf("3- Supprimer un Contact\n");
        printf("4- Afficher Tous les Contacts\n");
        printf("5- Rechercher un Contact\n");
        printf("6- Exit\n");

        printf("-----------------------------------------------------\n");
        printf("Entrer votre choix : ");
        scanf("%d",&choix);

        switch(choix)
        {
            case 1:
                add_contact();
                break;
            case 2:
                modif_contact();
                break;
            case 3:
                supp_contact();
                break;
            case 4:
                aff_contact();
                break;
            case 5:
                recherche_contact();
                break;
            case 6:
                printf("Exit.....\n");
                break;
        }
    }while(choix != 6);

}