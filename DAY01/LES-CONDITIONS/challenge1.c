#include <stdio.h>

int main() {
    
    int n;
    
    printf("entrer un entier : ");
    scanf("%d",&n);
    
    if(n % 2 == 0)
    {
        printf("c'est pair");
    }else{
        printf("c'est impair");
    }

    return 0;
}