#include <iostream>

using namespace std;

int N, low = 9999999, high = 0;

int main() {
  cin >> N;

  for (int i = 0; i < N; i++) {
    int k;
    cin >> k;

    if (k > high) {
      high = k;
    }

    if (k < low) {
      low = k;
    }
  }

  cout << high - low;
}
