#include <stdio.h>

struct rectangle {
  int length;
  int width;
};

int calculateArea(struct rectangle rect) {
  return rect.length * rect.width;
}

int main() {
  struct rectangle rect = {4, 5};
  int area = calculateArea(rect);
  printf("The area of the rectangle is: %d", area);
  return 0;
}
