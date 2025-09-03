#include <stdio.h>

int main() {
    
    int max;
    int n;
    int tab[100];
    printf("entrer le nombre d'element : ");
    scanf("%d",&n);
    
    
    for(int i = 0; i < n; i++)
    {
        printf("entrer les nombres : ");
        scanf("%d", &tab[i]);
    }
    
    max = tab[0];
    for(int i = 0; i < n; i++){
        
        if(tab[i] > max)
        {
            max = tab[i];
        }
    }