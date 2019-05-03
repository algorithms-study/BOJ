#include <stdio.h>

int main(void) {
  int n;
  int first, second;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d %d", &first, &second);
    printf("%d\n", first + second);
  }

  return 0;
}
