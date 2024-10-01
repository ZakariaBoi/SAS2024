#include <stdio.h>
#include <math.h>

int main() {
    struct Point1 {
        int x;
        int y;
        int z;
    };
    struct Point2 {
        int x;
        int y;
        int z;
    };
    struct Point1 newpoint1;
    struct Point2 newpoint2;

    printf("First Point:\n");
    printf("x: ");
    scanf("%d", &newpoint1.x);
    printf("y: ");
    scanf("%d", &newpoint1.y);
    printf("z: ");
    scanf("%d", &newpoint1.z);

    printf("Second Point:\n");
    printf("x: ");
    scanf("%d", &newpoint2.x);
    printf("y: ");
    scanf("%d", &newpoint2.y);
    printf("z: ");
    scanf("%d", &newpoint2.z);

    float distance = sqrt(pow(newpoint2.x - newpoint1.x, 2) + 
                          pow(newpoint2.y - newpoint1.y, 2) + 
                          pow(newpoint2.z - newpoint1.z, 2));
    printf("The Distance Between These Two Points Is: %f\n", distance);
    return 0;
}
