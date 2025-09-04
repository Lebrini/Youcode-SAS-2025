#include <stdio.h>

int main()
{
    int tab[50];
    int tab1[20];
    int tabtotal[70];
    int n;
    int n1;

    printf("entrer le nombre d'element pour la premiere tableau : ");
    scanf("%d",&n);
    
    for(int i = 0; i < n;i++)
    {
        printf("entrer les nombres : ");
        scanf("%d",&tab[i]);
    }
    printf("-----------------------------\n");
    printf("entrer le nombre d'element pour la premiere tableau : ");
    scanf("%d",&n1);
    
    for(int j = 0; j < n1;j++)
    {
        printf("entrer les nombres : ");
        scanf("%d",&tab1[j]);
    }
    
    for (int k = 0; k < n; k++)
    {
        tabtotal[k] = tab[k];
    }
    for (int j = 0; j < n1; j++)
    {
        tabtotal[n+j] = tab1[j];
    }

    for(int i = 0; i < n+n1; i++)
    {
        printf("%d", tabtotal[i]);
    }
}