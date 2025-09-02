#include <stdio.h>

int main() {
   int n;
   int rev = 0;
   printf("entrer un nombre : ");
   scanf("%d",&n);
   
   while(n > 0)
   {
       rev = rev * 10 + n % 10;
       n /= 10;
   }
   printf("%d",rev);
}
