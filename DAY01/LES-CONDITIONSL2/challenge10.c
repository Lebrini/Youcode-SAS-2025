#include <stdio.h>

int main() {
    int age, cotisation;
    float montant, bonus = 0.0;

    printf("Entrez l'age : ");
    scanf("%d", &age);

    printf("Entrez les annees de cotisation : ");
    scanf("%d", &cotisation);

    printf("Entrez le montant total epargne : ");
    scanf("%f", &montant);

    if (montant > 50000) {
        bonus = ((montant - 50000) / 10000) * 5; 
    }

    if (age >= 65 && cotisation >= 30 && montant >= 100000) {
        printf("Plan complet avec pension elevee\n");
    } else if (age >= 65 && cotisation >= 20 && montant >= 50000) {
        printf("Plan partiel avec pension moyenne\n");
    } else if (age < 65) {
        printf("Epargne non encore disponible\n");
    } else {
        printf("Plan non defini\n");
    }

    if (bonus > 0) {
        printf("Bonus : %.0f%%\n", bonus);
    }

    return 0;
}
