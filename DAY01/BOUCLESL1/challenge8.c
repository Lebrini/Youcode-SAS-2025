#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1, next;

    printf("Entrez le nombre de termes a afficher : ");
    scanf("%d", &n);

    printf("Suite de Fibonacci : ");

    for (i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d ", t1);
        } else if (i == 1) {
            printf("%d ", t2);
        } else {
            next = t1 + t2;
            printf("%d ", next);
            t1 = t2;
            t2 = next;
        }
    }

    printf("\n");
    return 0;
}
