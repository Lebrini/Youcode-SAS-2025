#include <stdio.h>

int main() {
    
    int n;
    int fact = 1;
    printf("entrer un nombre pour calculer le factorielle : ");
    scanf("%d",&n);
    
    while(n != 0)
    {
        fact *= n--;
    }
    printf("%d",fact);
    return 0;
}
