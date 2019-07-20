#include <iostream>

using namespace std;

int N, sum, arr[101][101] = {0, };
int main() {
  cin >> N;

  while (N--) {
    int x, y;
    cin >> x >> y;

    for (int i = x; i < x + 10; i++) {
      for (int j = y; j < y + 10; j++) {
        arr[i][j] = 1;
      }
    }
  }

  for (int i = 0; i < 101; i++) {
    for (int j = 0; j < 101; j++) {
      if (arr[i][j]) {
        sum++;
      }
    }
  }

  cout << sum;

