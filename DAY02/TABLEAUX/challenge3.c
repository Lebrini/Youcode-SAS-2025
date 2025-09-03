#include <stdio.h>

int main() {
    
    int n;
    int sum = 0;
    int tab[100];
    
    printf("entrer le nombre des element que vous pouvez entrer : ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        printf("entrer le nombre : ");
        scanf("%d",&tab[i]);
    }
    
    for(int i = 0; i < n; i++)
    {
        sum += tab[i];
    }
    printf("%d",sum);

    return 0;
}