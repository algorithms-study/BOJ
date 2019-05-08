#include <stdio.h>

#define MAX 26

int main(void) {
  char s[101];
  int english[MAX];

  scanf("%s", s);

  for (int i = 0; i < MAX; i++) {
    english[i] = -1;
  }

  // ascii code 97 = a 
  // ascii code 122 = z

  for (int i = 0; s[i] != '\0'; i++) {
    if (english[s[i] - 'a'] == -1) {
      english[s[i] - 'a'] = i;
    }
  }

  for (int i = 0; i < MAX; i++) {
    printf("%d ", english[i]);
  }

  return 0;
}
