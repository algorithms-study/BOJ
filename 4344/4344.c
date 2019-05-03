#include <stdio.h>

int main(void) {
  int n;
  int score[100];
  int students;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    int count = 0;
    int sum = 0;

    scanf("%d", &students);

    for (int j = 0; j < students; j++) {
      scanf("%d", &score[j]);
      sum += score[j];
    }

    for (int j = 0; j < students; j++) {
      if ((sum / students) < score[j]) {
        count++;
      }
    }
    
    printf("%.3f%%\n", ((float)count / students) * 100);
  }

  return 0;
}
