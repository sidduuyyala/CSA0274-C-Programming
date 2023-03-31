#include <stdio.h>

struct rectangle {
    float width;
    float height;
};

int main() {
    struct rectangle rect;

    printf("Enter the width of the rectangle: ");
    scanf("%f", &rect.width);

    printf("Enter the height of the rectangle: ");
    scanf("%f", &rect.height);

    float area = rect.width * rect.height;

    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}
