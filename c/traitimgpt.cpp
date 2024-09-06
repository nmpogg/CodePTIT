#include <stdio.h>
#include <math.h>

#define PI 3.14159265

void drawHeart(int size) {
  double angle;
  for (angle = 0.0; angle < 2 * PI; angle += 0.01) {
    double x = 16 * pow(sin(angle), 3);
    int y = 13 * cos(angle) - 5 * cos(2 * angle) - 2 * cos(3 * angle) - cos(4 * angle);
    putchar(' ');
    int i;
    for (i = 0; i < x * ; ++i) {
      putchar('*');
    }
    putchar('\n');
  }
}

int main(void) {
  drawHeart(10);
  return 0;
}

