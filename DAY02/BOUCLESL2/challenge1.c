#include <stdio.h>

int main() {
    
    int i,a;
    printf("entrer la valeur de a : ");
    scanf("%d",&a);
    for(i = 10; i > 0; i--)
    {
        printf("%d * %d = %d\n", a, i,a*i);
    }
    return 0;
}