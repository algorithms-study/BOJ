#include <stdio.h>
#include <string.h>

int main(void) {
  char k[100];

  scanf("%s", k);

  for (int i = 0; i < strlen(k); i++) {
    printf("%c", k[i]);
    if (i != 0 && i % 10 == 9) {
      printf("\n");
    }
  }

  return 0;
}
