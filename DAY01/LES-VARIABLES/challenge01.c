#include <stdio.h>

int main() {
    
    char nom[100];
    char prenom[100];
    int age;
    char sexe[50];
    char adresse[100];
    
    printf("entrer votre nom : ");
    scanf("%s", nom);
    printf("entrer votre prenom : ");
    scanf("%s", prenom);
    printf("entrer votre age : ");
    scanf("%d", &age);
    printf("entrer votre adresse : ");
    scanf("%s", adresse);
    printf("entrer votre sexe (M ou F): ");
    scanf("%s", sexe);
    
    
    printf("Votre nom : %s, prenom : %s, age : %d, sexe : %s, adresse : %s",nom,prenom,age,sexe,adresse);
    return 0;
}