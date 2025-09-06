#include <stdio.h>

int main(){

    char str[100] = "Hello,";
    char str1[100] = " World!";

    int i = 0, j = 0;

    while(str[i])
    {
        i++;
    }
    while(str[j])
    {
        str[i] = str1[j];
        i++;
        j++;
    }
    str[i] = '\0';

    printf("%s\n", str);
}