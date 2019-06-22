#include <iostream>

using namespace std;

int N;

int main() {
  cin >> N;

  for (int i = 0; i < N; i++) {
    int k;
    cin >> k;

    for (int i = 0; i < k; i++) {
      cout << '=';
    }

    cout << '\n';
  }
}
