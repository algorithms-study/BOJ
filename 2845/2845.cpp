#include <iostream>

using namespace std;

int L, P;

int main() {
  cin >> L >> P;

  for (int i = 0; i < 5; i++) {
    int n;
    cin >> n;

    cout << n - L * P << ' ';
  }
}
