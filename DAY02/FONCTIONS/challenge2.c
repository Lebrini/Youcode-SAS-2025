#include <stdio.h>

int multiply(int a, int b){
    return a * b;
}

int main(){
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    int product = multiply(a, b);
    printf("The product of %d * %d is %d\n", a, b, product);
    return 0;
}
