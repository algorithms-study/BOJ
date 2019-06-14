#include <iostream>

using namespace std;

int N, sum = 0;

int main() {
  cin >> N;

  for (int i = 0; i < N; i++) {
    // x: 학생 수, y: 사과 수
    int x, y;
    cin >> x >> y;

    sum += y % x;
  }

  cout << sum;
}
