#include <stdio.h>

int main() {
    
    int score, anciennete, recompenses;
    float bonus = 0.0;
    
     printf("Entrez le score de performance (0-100) : ");
    scanf("%d", &score);

    printf("Entrez l'anciennete (en annees) : ");
    scanf("%d", &anciennete);

    printf("Entrez le nombre de recompenses (0 = aucune, 1 = une, 2 = deux ou plus) : ");
    scanf("%d", &recompenses);

    if (recompenses == 1) {
        bonus = 0.10; 
    } else if (recompenses >= 2) {
        bonus = 0.20;  
    }

    if (score >= 90 && anciennete >= 5) {
        printf("Evaluation : Excellente\n");
    } else if (score >= 75 && anciennete >= 3) {
        printf("Evaluation : Bonne\n");
    } else if (score >= 50 && anciennete < 3) {
        printf("Evaluation : Satisfaisante\n");
    } else if (score < 50) {
        printf("Evaluation : Insuffisante\n");
    } else {
        printf("Evaluation : Non definie par les regles\n");
    }

    if (bonus > 0) {
        printf("Bonus de performance : %.0f%%\n", bonus * 100);
    } else {
        printf("Aucun bonus attribue.\n");
    }


    return 0;
}
