#include <stdio.h>

int main()
{
    int n;
    int tab[5];
    
    for(int i = 0; i < 5; i++)
    {
        printf("entrer des nombre : ");
        scanf("%d",&tab[i]);
    }
    printf("--------------------------");
    printf("entrer un nombre : ");
    scanf("%d",&n);

    int i = 0;
    int count = 0;
    while(i < 5)
    {
        if(tab[i] == n)
        {
            count = 1;
            break;
        }
        i++;
    }
    

    if(count == 1)
    {
        printf("le nombre %d est dans le tableau",n);
    }
    else{
        printf("le nombre %d n'est pas dans le tableau",n);
    }
}