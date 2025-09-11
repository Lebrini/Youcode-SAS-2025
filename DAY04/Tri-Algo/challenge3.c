#include <stdio.h>

int main()
{
    int tab[] = {1,12,9,6,10};
    int tmp;
    int size = sizeof(tab) / sizeof(tab[0]);
    for(int i = 0; i < size - 1; i++)
    {
        int min = i;
        for(int j = i + 1; j < size; j++)
        {
            if(tab[j] < tab[min])
            {
                min = j;
            }
        }

        if(min != i)
        {
            tmp = tab[i];
            tab[i] = tab[min];
            tab[min] = tmp;
        }
    }

    for(int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
}