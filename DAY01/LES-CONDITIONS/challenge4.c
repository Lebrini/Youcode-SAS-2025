#include <stdio.h>

int main() {
    
    int n,mois,jours,heures,minutes, secondes;
    printf("choisis l'un des choix dans le menu : \n");
    printf("1 - Mois\n");
    printf("2 - Jours\n");
    printf("3 - Heures\n");
    printf("4 - Minutes\n");
    printf("5 - Secondes\n");
    
    printf("entrer votre choix : ");
    scanf("%d",&n);
    
    switch(n){
        case 1:
           printf("le nombre de mois dans annees : 12 mois");
           break;
        case 2:
           printf("le nombre de jours dans annees : 365 jours");
           break;
        case 3:
           printf("le nombre des heures dans annees : %d", 365*24);
           break;
        case 4:
           printf("le nombre des minutes dans annees : %d",365*1440);
           break;
        case 5:
           printf("le nombres des secondes dans annees : %d", 525600*60);
           break;
        default :
        
           printf("aucun autre choix exist\n");
    }
    return 0;
}