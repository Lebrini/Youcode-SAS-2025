#include <stdio.h>

int main(){
    int tab[] = {1,6,9,3,5};
    int size = sizeof(tab) / sizeof(tab[0]);
    int tmp;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(tab[j] > tab[j+1])
            {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j+1] = tmp;
            }
        }
    }
    for(int i = 0; i < size; i++)
    {
        printf("%d",tab[i]);
    }
}