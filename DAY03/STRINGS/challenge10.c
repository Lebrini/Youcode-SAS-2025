#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char sub[100];
    char *result;

    printf("Enter the main string: ");
    scanf(" %[^\n]", str);
    printf("Enter the substring to search for: ");
    scanf(" %[^\n]", sub);
    result = strstr(str, sub);

    if (result != NULL) {
        printf("le sub-string est trouvee\n");
    } else {
        printf("le sub-string n'est pas trouvee\n");
    }
    return 0;
}
