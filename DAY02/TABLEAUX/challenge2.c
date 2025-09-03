#include <stdio.h>

int main() {
    
    int n;
    int tab[50];
    
    printf("entrer le nombre des element aue vous pouvez entrer : ");
    scanf("%d",&n);
    
    
    
    for(int i = 0; i < n; i++)
    {
        printf("entrer le nombre : ");
        scanf("%d",&tab[i]);
    }
    
    for(int i = 0; i < n; i++)
    {
        printf("les valeurs entree sont : %d",tab[i]);
    }
    return 0;
}