#include <stdio.h>
#include <string.h>
char str_rev(char str[])
{
    char reversed[100];
    int len = strlen(str);
    for(int i = 0; i < len ;i++)
    {
        reversed[i] = str[len - i - 1];
    }
    reversed[len] = '\0';
    printf("Reversed string: %s\n", reversed);
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    str_rev(str);
    return 0;
}