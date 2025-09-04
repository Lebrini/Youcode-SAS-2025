#include <stdio.h>

int max(int a, int b){
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main(){
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    int maximum = max(a, b);
    printf("The maximum of %d and %d is %d\n", a, b, maximum);
    return 0;
}