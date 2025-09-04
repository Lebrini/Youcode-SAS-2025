#include <stdio.h>

int main()
{
    int n;
    int tab[50];
    int rem;
    int j;
    
    printf("entrer le nombre d'element : ");
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++)
    {
        printf("entrer les nombre [%d]: ",i);
        scanf("%d", &tab[i]);
    }
    printf("entrer l'index de l'element pour remplacer : ");
    scanf("%d",&j);

    printf("entrer la nouvelle valeur qui remplace la valeur precedente : ");
    scanf("%d",&rem);

    for(int i = 0; i < n;i++)
    {
        if(i == j)
        {
            tab[i] = rem;
        }
    }
    printf("la version final du tableau : \n");
    printf("[");
    for(int i = 0; i < n;i++)
    {
        printf(" %d",tab[i]);
    }
    printf("]");

}