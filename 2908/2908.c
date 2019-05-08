#include <stdio.h>

int reverse(int n) {
  int hundreds = n / 100; // 백의자리
  int tens = (n % 100) / 10; // 십의자리
  int units = n % 10; // 일의자리
  return units * 100 + tens * 10 + hundreds;
}

int main(void) {
  int a, b;

  scanf("%d %d", &a, &b);

  a = reverse(a);
  b = reverse(b);

  if (a > b) {
    printf("%d", a);
  } else {
    printf("%d", b);
  }

  return 0;
}
