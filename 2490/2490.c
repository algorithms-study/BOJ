#include <stdio.h>

#define WIDTH 4
#define HEIGHT 3

int main(void) {
  char items[5] = {'E', 'A', 'B', 'C', 'D'};
  // 배(0) 등(1)
  // 도는 A, 개는 B, 걸은 C, 윷은 D, 모는 E
  for (int i = 0; i < HEIGHT; i++) {
    int count = 4;
    for (int j = 0; j < WIDTH; j++) {
      int n;
      scanf("%d", &n);
      count -= n;
    }

    printf("%c\n", items[count]);
  }

  return 0;
}
