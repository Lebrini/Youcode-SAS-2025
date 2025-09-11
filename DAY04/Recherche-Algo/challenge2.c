#include <stdio.h>

int main()
{
    int tab[] = {1,2,3,4,5,6,7};
    int n = sizeof(tab) / sizeof(tab[0]);
    int value;
    int gauche = 0;
    int droite = n - 1;
    printf("entrer la valeur pour rechercher : ");
    scanf("%d",&value);

    while(gauche <= droite)
    {
        int milieu = (gauche + droite) / 2;

        if(tab[milieu] == value)
        {
            printf("Element %d trouve a dans indice %d\n", value, milieu);
            break;
        }
        else if(tab[milieu] < value)
        {
            gauche = milieu + 1;
        }
        else{
            droite = milieu - 1;
        }
    }
}