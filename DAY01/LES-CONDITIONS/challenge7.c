#include <stdio.h>

int main() {
    
   char x;
   
   printf("entrer un caractere : ");
   scanf("%c",&x);
   
   if(x >= 65 && x <= 90)
   {
       printf("le caractere est en majuscule");
   }else
   {
       printf("le caractere est en minuscule");
   }
   
    return 0;
}