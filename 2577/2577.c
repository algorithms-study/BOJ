#include <stdio.h>

int main(void) {
  int first, second, third;
  int arr[10] = {0,};

  scanf("%d", &first);
  scanf("%d", &second);
  scanf("%d", &third);

  int sum = first * second * third;

  while (sum != 0) {
    arr[sum % 10]++; // sum 의 1의 자리
    sum /= 10; // 십의 자리가 일의 자리가 되고 백의 자리가 십의 자리
  }

  for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
    printf("%d\n", arr[i]);
  }

  return 0;
}
