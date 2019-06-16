#include <iostream>

using namespace std;

int N;

int main() {
  cin >> N;

  for (int i = 1; i < N; i++) {
    for (int j = 0; j < N - i; j++) {
      cout << " ";
    }

    for (int j = 1; j < i + 1; j++) {
      cout << "*";
    }
    cout << '\n';
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }

    for (int j = i; j < N; j++) {
      cout << "*";
    }

    cout << '\n';
  }
}
