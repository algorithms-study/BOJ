#include <iostream>

using namespace std;

int N, count;

int main() {
  cin >> N;

  for (int i = 1; i <= N; i++) {
    int k;
    cin >> k;

    if (i != k) {
      count++;
    }
  }

  cout << count;
}
