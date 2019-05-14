#include <stdio.h>

#define PERSON 5

int main(void) {
  int sum = 0;

  for (int i = 0; i < PERSON; i++) {
    int n;
    scanf("%d", &n);

    if (n < 40) {
      n = 40;
    }

    sum += n;
  }

  printf("%d", sum / PERSON);
  return 0;
}
