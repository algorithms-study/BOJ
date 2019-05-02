#include <stdio.h>

int main() {
    int n; // input
    int div; // division

    scanf("%d", &n);

    if (n == 4 || n == 7) {
        printf("-1");
        return 0;
    }

    div = n / 5;

    /**
     *  n   |               | n % 5
     * ----------------------------
     *  15 -> 5:3           나머지 0    => 0 // div
     *  16 -> 5:2 / 3:2     나머지 1    => 4 // div + 1
     *  17 -> 5:1 / 3:4     나머지 2    => 5 // div + 2
     *  18 -> 5:3 / 3:1     나머지 3    => 4 // div + 1
     *  19 -> 5:2 / 3:3     나머지 4    => 5 // div + 2
     * 
     *  입력 받은 수에 div, 나머지가 1, 3 일 경우 div + 1, 나머지가 2, 4 일 경우 div + 2
     */

    switch (n % 5) {
        case 0:
            printf("%d", div);
            break;
        case 1:
        case 3:
            printf("%d", div + 1);
            break;
        case 2:
        case 4:
            printf("%d", div + 2);
            break;
    }

    return 0;
}