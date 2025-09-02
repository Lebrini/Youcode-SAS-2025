#include <stdio.h>

int main() {
    
    float km_per_hour;
    float m_per_second;
    printf("entrer la valeur de vitesse en Km/h : ");
    scanf("%f",&km_per_hour);
    m_per_second = km_per_hour * 0.27778;
    
    printf("la vitesse en m/s : %.2f",m_per_second);

    return 0;
}