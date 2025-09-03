#include <stdio.h>

int main() {
    
    int n;
    printf("entrer le nombre des element :");
    scanf("%d",&n);
    
    
    int tab[n];
    int size;
    int rev[n];
    for(int i = 0; i < n;i++)
    {
        printf("entrer les nombre :");
        scanf("%d",&tab[i]);
    }
    size = sizeof(tab) / sizeof(tab[0]);
    
    for(int i = 0; i < size; i++)
    {
        rev[i] = tab[size - 1 - i];
    }
    for(int i = 0; i < size; i++)
    {
        printf("tableau reverse : %d",rev[i]);
    }

    return 0;
}