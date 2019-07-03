#include <iostream>
#include <cmath>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int i = 0; i < T; i++) {
    int N, C;
    cin >> N >> C;

    cout << int(ceil((double)N / C)) << '\n';
  }
}
