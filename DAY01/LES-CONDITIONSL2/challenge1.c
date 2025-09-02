#include <stdio.h>

int main() {
    
    int revenu, score, duree;
    
    
    printf("entrer votre revenu en euros: ");
    scanf("%d",&revenu);
    printf("entrer votre score de credit/1000: ");
    scanf("%d", &score);
    printf("entrer votre duree en annee: ");
    scanf("%d",&duree);
    
    if(revenu >= 30000 && score >= 700 && duree <= 10)
    {
        printf("Eligible\n");
    }
    else if(revenu >= 30000 && score >= 650 && duree <= 15)
    {
        printf("Eligible avec Conditions\n");
    }
    else if(revenu < 30000 && score < 650 && duree > 15)
    {
        printf("Non éligible\n");
    }
    
    return 0;
}