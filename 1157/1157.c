#include <stdio.h>
#include <string.h>

#define ENGLISH_SIZE 26

int main(void) {
  char s[1000001];
  char result;
  int max = 0;
  int duplicated = 0;
  int english[ENGLISH_SIZE] = { 0 };

  scanf("%s", s);

  for (int i = 0; i < strlen(s); i++) {
    if ('a' <= s[i]) {
      s[i] -= 'a' - 'A';
    } 
    
    english[s[i]]++;
  }

  for (int i = 'A'; i <= 'Z'; i++) {
    if (english[i] > max) {
      max = english[i];
      result = i;
    } else if (max != 0 && english[i] == max) {
      duplicated = 1;
    }
  }
  
  if (duplicated >= 1) {
    printf("?");
  } else {
    printf("%c", result);
  }

  return 0;
}
