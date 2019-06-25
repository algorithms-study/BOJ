#include <iostream>

using namespace std;

int T;

int main() {
  cin >> T;
  cout << fixed;
  cout.precision(2);

  for (int i = 0; i < T; i++) {
    double n;
    cin >> n;

    cout << '$' << n - (n * 0.2) << '\n';
  }
}
