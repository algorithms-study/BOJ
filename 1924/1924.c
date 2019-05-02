#include <stdio.h>

int main(void) {
  char *date[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
  int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int mon, day;
  int sum = 0;

  scanf("%d %d", &mon, &day);

  for (int i = 1; i < mon; i++) {
    sum += month[i - 1];
  }

  sum += day;

  printf("%s", date[sum %7]);

  return 0;
}
