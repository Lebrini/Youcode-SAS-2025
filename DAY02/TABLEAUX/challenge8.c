#include <stdio.h>

int main() {
    
    int n;
    printf("entrer le nombre des element :");
    scanf("%d",&n);
    
    
    int tab[n];
    int tab2[n];
    
    for(int i = 0; i < n;i++)
    {
        printf("entrer les nombres : ");
        scanf("%d",&tab[i]);
    }
    
    for(int i = 0; i < n;i++)
    {
        tab2[i] = tab[i]; 
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d",tab2[i]);
    }

    return 0;
}