#include <stdio.h>

int main()
{
    int n;
    int i = 0;
    printf("entrer un nombre : ");
    scanf("%d",&n);

    int somme = 0;
    while (i <= n)
    {
        somme += i;
        i++;
    }
    printf("%d",somme);
}