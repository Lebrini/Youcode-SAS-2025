#include <stdio.h>

int main(){

    char *str;

        printf("entrer une string : ");
        scanf("%s", str);

        while(*str != '\0'){
            if(*str >= 'a' && *str <= 'z'){
               (*str) -= 32;
            }
              printf("%c", *str);
              str++;
        }
    return 0;
}