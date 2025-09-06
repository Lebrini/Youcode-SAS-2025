#include <stdio.h>
#include <string.h>
struct personne{

    char nom[100];
    char prenom[100];
    int age;
};

int main(){
    
    struct personne p1;

    strcpy(p1.nom, "useruser");
    strcpy(p1.prenom, "user");
    p1.age = 21;
    printf("%s\n",p1.nom);
    printf("%s\n",p1.prenom);
    printf("%d\n",p1.age);
}