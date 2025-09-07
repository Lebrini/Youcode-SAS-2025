#include <stdio.h>

struct rectangle {
    int longueur;
    int largeur;
};

int air(struct rectangle r) {
    return r.longueur * r.largeur;
}
int main(){
    struct rectangle rect;

    int l, L;
    printf("entrer la longueur: ");
    scanf("%d", &L);
    printf("entrer la largeur: ");
    scanf("%d", &l);

    rect.longueur = L;
    rect.largeur = l;
    printf("l'aire du rectangle est: %d\n", air(rect));
    return 0;

}