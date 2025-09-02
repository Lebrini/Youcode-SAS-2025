#include <stdio.h>

int main() {
    
    float C;
    
    float K;
    printf("enter la valeur de temperature en celsius : ");
    scanf("%f",&C);
    
    K = C * 273.15;
    
    printf("la valeur en kelvin est : %.2f",K);
}