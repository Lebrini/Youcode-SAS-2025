#include <stdio.h>

int main()
{
    char str[100];

    printf("entrer une string : ");
    scanf("%s", str);

    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    printf("la longueur de la string est : %d\n", i);
    return 0;
}