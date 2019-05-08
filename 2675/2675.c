#include <stdio.h>
#include <string.h>

int main(void) {
  int n;
  int num;
  char s[100];
	
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
	scanf("%d %s", &num, s);

	for (int j = 0; j < strlen(s); j++) {
	  for (int k = 0; k < num; k++) {
		printf("%c", s[j]);
	  }
	}
	printf("\n");
  }

  return 0;
}
