#include <stdio.h>
#include <math.h>

struct point {
    float x;
    float y;
};

int main() {
    struct point p1, p2;
    float distance;

   
    printf("Enter the x coordinate for point 1: ");
    scanf("%f", &p1.x);
    printf("Enter the y coordinate for point 1: ");
    scanf("%f", &p1.y);

    
    printf("Enter the x coordinate for point 2: ");
    scanf("%f", &p2.x);
    printf("Enter the y coordinate for point 2: ");
    scanf("%f", &p2.y);

   
    distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

    
    printf("The distance between (%f, %f) and (%f, %f) is %f\n",
           p1.x, p1.y, p2.x, p2.y, distance);

    return 0;
}
