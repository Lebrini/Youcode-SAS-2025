#include <stdio.h>

int main() {
    
    int n;
    int rev;
    int unite, dizaine,centaine, mille;
    printf("entrer un nombre de 4 chiffre : ");
    scanf("%d",&n);
    
    unite = n % 10;
    dizaine = (n / 10) % 10;
    centaine  = (n % 1000) / 100;
    mille = n / 1000;
    
    rev = unite * 1000 + dizaine * 100 + centaine * 10 + mille;
    printf("%d",rev);
    return 0;
}