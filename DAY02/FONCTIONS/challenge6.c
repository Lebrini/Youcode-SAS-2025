#include <stdio.h>

int fibonacci(int m){

  return fibonacci(m - 1) + fibonacci(m - 2);

}
int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    int result = fibonacci(num);
    printf("The fibonacci of %d is %d\n", num, result);
    return 0;
}