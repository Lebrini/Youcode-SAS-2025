#include <stdio.h>
#include <string.h>
struct students{
    char name[30];
    char lastname[30];
    int notes[5];
};

int main()
{
    struct students students;
    strcpy(students.name, "AMINE");
    strcpy(students.lastname, "LEBRINI");

        int tempNotes[5] = {12, 15, 14, 18, 19};
    for(int i = 0; i < 5; i++){
        students.notes[i] = tempNotes[i];
    }

    printf("Name: %s\n", students.name);
    printf("Lastname: %s\n", students.lastname);
    printf("Notes: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", students.notes[i]);
    }
}