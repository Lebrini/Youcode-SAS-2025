#include <stdio.h>

int main() {
    
    int C;
    
    printf("entrer la valeur de temperature en celsius : ");
    scanf("%d",&C);
    
    if(C < 0)
    {
        printf("Solide");
    }
    else if( C >= 0 && C < 100)
    {
        printf("Liquide");
    }else if(C >= 100)
    {
        printf("Gaz");
    }
    return 0;
}