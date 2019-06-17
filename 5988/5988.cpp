#include <iostream>

using namespace std;

int N;

int main() {
  cin >> N;

  for (int i = 0; i < N; i++) {
    string K;
    cin >> K;

    cout << ((K[K.length() - 1] % 2 == 0) ? "even" : "odd");
    cout << '\n';
  }
}
