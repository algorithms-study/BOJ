#include <iostream>

using namespace std;

int R, C;

int main() {
  cin >> R;
  cin >> C;

  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      cout << "*";
    }

    cout << '\n';
  }
}
