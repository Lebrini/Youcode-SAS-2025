#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main(){

    struct Point p1;

    struct Point *p = &p1;

    (*p).x = 10;
    (*p).y = 20;
    printf("Point coordinates: (%d, %d)\n", (*p).x, (*p).y);
}