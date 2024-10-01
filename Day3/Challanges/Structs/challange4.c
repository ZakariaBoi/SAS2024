#include <stdio.h>

int main() {
    struct Point {
        int x;
        int y;
    };

    struct Point p;
    struct Point* newp = &p; 
    newp->x = 5;  
    newp->y = 6;  

    printf("x : %i\ny : %i", newp->x, newp->y);  
    return 0;
}
