#include <stdio.h>

int main() {
    
    int a, b;
    
    printf("enter nombre pour a : ");
    scanf("%d",&a);
    printf("enter nombre pour b : ");
    scanf("%d",&b);
    int somme;
    int triple;
    if(a == b)
    {
        triple = (a+b)*3;
        printf("%d",triple);
    }
    else{
        somme = a + b;
        printf("%d",somme);
    }

    return 0;
}