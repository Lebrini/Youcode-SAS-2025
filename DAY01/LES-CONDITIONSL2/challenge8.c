#include <stdio.h>

int main() {
    int age, historique, couverture;

    printf("Entrez l'age : ");
    scanf("%d", &age);

    printf("Entrez l'historique medical (0 = aucun, 1 = mineur, 2 = majeur) : ");
    scanf("%d", &historique);

    printf("Entrez le type de couverture (1 = de base, 2 = etendue) : ");
    scanf("%d", &couverture);

    if (age < 30) {
        printf("Plan de sante : Plan de base\n");
    } else if (age >= 30 && historique == 0) {
        printf("Plan de sante : Plan de base\n");
    } else if (age >= 30 && historique >= 1) {
        printf("Plan de sante : Plan etendu\n");
    }

    if (historique == 2) {
        printf("Couverture supplementaire ajoutee pour probleme majeur.\n");
    }

    if (couverture == 1) {
        printf("Type de couverture choisi : De base\n");
    } else if (couverture == 2) {
        printf("Type de couverture choisi : Etendue\n");
    } else {
        printf("Type de couverture invalide.\n");
    }

    return 0;
}
