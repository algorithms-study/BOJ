#include <stdio.h>

#define MAX 8

int main(void) {
  int arr[MAX], asc = 0, desc = 0;
  char *result;

  for (int i = 0; i < MAX; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < MAX; i++) {
    if (arr[i] > arr[i - 1]) {
      asc++;
    } else if (arr[i] < arr[i - 1]) {
      desc++;
    }
  }

  if (asc == 8) {
    result = "ascending";
  } else if (desc == 7) {
    result = "descending";
  } else {
    result = "mixed";
  }

  printf("%s", result);

  return 0;
}
