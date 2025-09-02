#include <stdio.h>

int main() {
    
    char v;
    
    printf("entrer un caractere : ");
    scanf("%c",&v);
    
    if(v >= 'A' && v <= 'Z')
    {
        v += 32; 
    }
    
    switch(v){
        case 'a':
           printf("OUI EST UN VOYELLE");
           break;
        case 'e':
           printf("OUI EST UN VOYELLE");
           break;
        case 'i':
           printf("OUI EST UN VOYELLE");
           break;
        case 'o':
           printf("OUI EST UN VOYELLE");
           break;
        case 'u':
           printf("OUI EST UN VOYELLE");
           break;
        case 'y':
           printf("OUI EST UN VOYELLE");
           break;
        default :
           printf("NON, PAS UN VOYELLE");
    }

    return 0;
}