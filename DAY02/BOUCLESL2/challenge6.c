#include <stdio.h>

int main()
{
    int n;
    int i = 1;
    printf("entrer un nombre : ");
    scanf("%d",&n);

    while(i <= n)
    {
        if(n % i == 0)
        {
            printf("%d ",i);
        }
        i++;
    }
    
}