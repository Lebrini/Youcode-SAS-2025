#include <stdio.h>

int main()
{
    int n;
    int tab[50];
    int ser;

    
    printf("entrer le nombre d'element : ");
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++)
    {
        printf("entrer les nombre [%d]: ",i);
        scanf("%d", &tab[i]);
    }
    printf("entrer l'element pour rechercher : ");
    scanf("%d",&ser);

    for(int i = 0; i < n;i++)
    {
        if(tab[i] == ser)
        {
            printf("l'element est existe, se trouve dans l'index : %d",i);
        }
    }


}