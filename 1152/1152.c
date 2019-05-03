#include <stdio.h>
#include <string.h>

int main(void) {
  char n[10000];
  int count = 0;

  scanf("%[^\n]s", n);

  for (int i = 0; n[i] != '\0'; i++) {
    if (n[i] == ' ') {
      count++;
    }
  }

  if (n[0] == ' ') {
    count--;
  }

  if (n[strlen(n) - 1] == ' ') {
    count--;
  }

  printf("%d", count + 1);

  return 0;
}
