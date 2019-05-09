#include <stdio.h>

#include <string.h>

int main(void) {
  char s[101];
  int count = 0;
  
  scanf("%s", &s);

  /**
  크로아티아 알파벳	변경
  č       	c=
  ć	        c-
  dž	      dz=
  đ	        d-
  lj	      lj
  nj	      nj
  š	        s=
  ž	        z=
  */

  for (int i = 0; i < strlen(s); i++) {
    if (s[i] == 'c') {
      if (s[i + 1] == '=' || s[i + 1] == '-') {
        i++;
      }
    } else if (s[i] == 'd') {
      if (s[i + 1] == '-') {
        i++;
      } else if (s[i + 1] == 'z' && s[i + 2] == '=') {
        i += 2;
      }
    } else if (s[i] == 'l' || s[i] == 'n') {
      if (s[i + 1] == 'j') {
        i++;
      }
    } else if (s[i] == 's' || s[i] == 'z') {
      if (s[i + 1] == '=') {
        i++;
      }
    }

    count++;
  }

  printf("%d", count);

  return 0;
}
