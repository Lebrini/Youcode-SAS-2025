#include <stdio.h>

int main() {
    float revenu, revenu_net, impot;
    int statut;

    printf("Entrez le revenu annuel (en euros) : ");
    scanf("%f", &revenu);

    printf("Entrez le statut fiscal (1 = Celibataire, 2 = Marie, 3 = Chef de famille) : ");
    scanf("%d", &statut);

    if (statut == 1) {
        revenu_net = revenu - 1000;
    } else if (statut == 2) {
        revenu_net = revenu - 2000;
    } else if (statut == 3) {
        revenu_net = revenu - 3000;
    } else {
        printf("Statut fiscal invalide.\n");
        return 1;
    }

    if (revenu_net <= 20000) {
        impot = revenu_net * 0.05; 
    } else if (revenu_net <= 50000) {
        impot = revenu_net * 0.10; 
    } else {
        impot = revenu_net * 0.20; 
    }

    printf("Revenu net imposable : %.2f €\n", revenu_net);
    printf("Impots a payer : %.2f €\n", impot);

    return 0;
}
