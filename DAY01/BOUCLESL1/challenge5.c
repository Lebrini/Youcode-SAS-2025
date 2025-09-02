#include <stdio.h>
#include <math.h>

int main() {
    
    int a;
    int base;
    int puis;
    printf("entrer un le puissance : ");
    scanf("%d",&a);
    printf("entrer un la base : ");
    scanf("%d",&base);
    
    puis = pow(base,a);
    printf("%d",puis);
    return 0;
}
