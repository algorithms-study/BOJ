#include <iostream>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int i = 0; i < T; i++) {
    int M;
    char op;
    cin >> M >> op;

    for (int j = 0; j < M; j++) {
      if (op == 'C') {
        char x;
        cin >> x;

        cout << x - 64 << " ";
      } else {
        int x;
        cin >> x;

        cout << char(x + 'A' - 1) << " ";
      }
    }

    cout << '\n';
  }
}
