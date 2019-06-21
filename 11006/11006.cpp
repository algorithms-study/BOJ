#include <iostream>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int i = 0; i < T; i++) {
    int N, M;
    cin >> N >> M;

    cout << M * 2 - N << ' ' << M - (M * 2 - N) << '\n';
  }
}
