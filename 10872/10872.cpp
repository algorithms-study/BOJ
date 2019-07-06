#include <iostream>

using namespace std;

int N;

int fact(int n) {
  int ret = 1;

  for (int i = 2; i <= n; i++) {
    ret *= i;
  }

  return ret;
}

int main() {
  cin >> N;

  cout << fact(N);
}
