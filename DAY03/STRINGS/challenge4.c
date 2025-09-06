#include <stdio.h>

int main(){
    char str[100];
    char str1[100];

    printf("Enter a string: ");
    scanf("%s",str);

    printf("Enter a string: ");
    scanf("%s",str1);

    int equal = 1;
    int i = 0;
    while(str[i] != '\0' && str1[i] != '\0')
    {
       if (str[i] != str1[i])
       {
        equal = 0;
        break;
       }
       i++;
    }
    
    if(equal) {
        printf("Les chaines sont egales\n");
    } else {
        printf("Les chaines ne sont pas egales\n");
    }
    return 0;
}