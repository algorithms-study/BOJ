#include <stdio.h>
#include <string.h>

int main(void) {
  int n, count = 0;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    char s[101];
    int english[26] = { 0 };
    int flag = 1;

    scanf("%s", s);
    
    for (int j = 0; j < strlen(s); j++) {
      if (english[s[j] - 'a'] == 1) {
        flag = 0;
        break;
      } 

      if (s[j] != s[j + 1]) {
        english[s[j] - 'a'] = 1;
      }
    }

    if (flag == 1) {
      count++;
    }
  }

  printf("%d", count);

  return 0;
}
