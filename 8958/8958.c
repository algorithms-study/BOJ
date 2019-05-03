#include <stdio.h>

int main(void) {
  int n;
  char arr[1000];

  scanf("%d", &n);

  while (n--) {
    int count = 0, prev = 0;
    scanf("%s", arr);
    
    for (int j = 0; arr[j]; j++) {
      if (arr[j] == 'O') {
        count++;
      } else {
        count = 0;
      }
      prev += count;
    }
    printf("%d\n", prev);
  }

  return 0;
}
