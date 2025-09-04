#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main(){
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    int sum = add(a, b);
    printf("The sum of %d + %d is %d\n", a, b, sum);
    return 0;
}