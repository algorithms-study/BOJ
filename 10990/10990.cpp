#include <iostream>

using namespace std;

int N;

int main() {
  cin >> N;

  for (int i = 0; i < N - 1; i++) {
    cout << " ";
  }

  cout << "*\n";

  for (int i = 1; i <= N - 1; i++) {
    for (int j = 1; j <= N - (i + 1); j++) {
      cout << " ";
    }

    cout << "*";
    for (int j = 1; j <= 2 * i - 1; j++) {
      cout << " ";
    }
    cout << "*\n";
  }
}
