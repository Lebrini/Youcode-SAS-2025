#include <stdio.h>

int main() {
    
    int size;
    int tab[100];
    int n;
    int tmp;
    printf("entrer le nombre d'element : ");
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++)
    {
        printf("entrer les nombres : ");
        scanf("%d",&tab[i]);
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(tab[i] > tab[j])
            {
              tmp = tab[i];
              tab[i] = tab[j];
              tab[j] = tmp;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d",tab[i]);
    }
    return 0;
}