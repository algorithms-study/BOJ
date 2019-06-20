#include <iostream>

using namespace std;

int T, sum;

int main() {
  cin >> T;

  for (int i = 0; i < T; i++) {
    char n;
    cin >> n;
    sum += n - '0' - 16;
  }

  cout << sum;
}
