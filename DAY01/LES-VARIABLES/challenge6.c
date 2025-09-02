#include <stdio.h>

int main() {
    
    int a,b;
    
    printf("entrer la valeur de a : ");
    scanf("%d",&a);
    printf("entrer la valeur de b : ");
    scanf("%d",&b);
    
    printf("la somme de a et b : %d\n", a + b);
    printf("la soustraction entre a et b : %d\n", a - b);
    printf("le produit de a et b : %d\n", a * b);
    printf("la division de a et b : %d\n", a / b);
    
    return 0;
}