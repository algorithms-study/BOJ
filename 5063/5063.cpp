#include <iostream>

using namespace std;

int N;

int main() {
  cin >> N;

  for (int i = 0; i < N; i++) {
    int R, E, C;
    cin >> R >> E >> C;

    if (R < E - C) {
      cout << "advertise\n";
    } else if (R == E - C) {
      cout << "does not matter\n";
    } else {
      cout << "do not advertise\n";
    }
  }
}
