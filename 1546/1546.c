#include <stdio.h>

int main(void) {
  int n;
  int x;
  int max = 0;
  double sum = 0;
  double result = 0;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &x);
    sum += x;

    if (x > max) {
      max = x;
    }  
  }

  result = ((sum / max) / n) * 100;

  printf("%f", result);

  return 0;
}
