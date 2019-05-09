#include <stdio.h>

#define PI 3.14159265358979323846

int main(void) {
  double n;
  scanf("%lf", &n);

  printf("%.6f\n", n * n * PI);
  printf("%.6f\n", n * n * 2);
  return 0;
}
