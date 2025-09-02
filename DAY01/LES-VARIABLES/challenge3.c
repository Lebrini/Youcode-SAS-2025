#include <stdio.h>

int main() {
    
    double km;
    double Yards;
    
    
    printf("enter la valeur en Km : ");
    scanf("%lf",&km);
    
    Yards = km * 1093.61;
    
    printf("la valeur en kelvin est : %f",Yards);
}