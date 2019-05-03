#include <stdio.h>

int nextNumber(int num) {
  int units = num % 10; // 일의자리
  int tens = num / 10; // 십의자리

  return (units * 10) + ((units + tens) % 10);
}

int main(void) {
  int n;
  int count = 0;

  scanf("%d", &n);

  int num = n;

  while(1) {
    count++;
    num = nextNumber(num);

    if (n == num) {
      break;
    }
  }

  printf("%d", count);
  return 0;
}
