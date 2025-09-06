#include <stdio.h>
#include <string.h>
int main(){

    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int i = 0;
    int count = 0;
    int len = strlen(str);

    for(int i = 0; i < len; i++)
    {
        count = 1;
        if(str[i] == '0')
        {
            continue;
        }
    
        for(int j = i + 1; j < len; j++)
        {
            if(str[i] == str[j])
            {
                count++;
                str[j] = '0'; // Mark as counted
            }
        }
    printf("The character %c occurs %d times\n", str[i], count);
    }
    return 0;
}