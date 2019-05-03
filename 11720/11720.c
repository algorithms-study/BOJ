#include <stdio.h>

int main(void) {
  int n, sum = 0;
  char k[100];

  scanf("%d", &n);
  scanf("%s", k);

  for (int i = 0; i < n; i++) {
    sum += k[i] - 48;
  }

  printf("%d", sum);

  return 0;
}
