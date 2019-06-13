#include <iostream>
#include <vector>

using namespace std;

int N, sum, tmp;

int main() {
  cin >> N;

  for (int i = 0; i < N; i++) {
    int k;
    cin >> k;

    if (k == 1) {
      tmp++;
      sum += tmp;
    } else {
      tmp = 0;
    }
  }

  cout << sum;
}
