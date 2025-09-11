#include <stdio.h>

int main()
{
    int x = 5;
    int tab[] = {2,5,4,7,9};
    int size = sizeof(tab) / sizeof(tab[0]);
    for(int i = 0; i < size ; i++)
    {
        if(tab[i] == x)
        {
            printf("le nombre se trouve dans l'index %d",i);
        }
    }
}