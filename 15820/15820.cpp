#include <iostream>

using namespace std;

int S1, S2;
bool check = true;
bool systemCase = true;

int main() {
  cin >> S1 >> S2;

  for (int i = 0; i < S1; i++) {
    int x, y;
    cin >> x >> y;

    if (x != y) {
      check = false;
    }
  }

  for (int i = 0; i < S2; i++) {
    int x, y;
    cin >> x >> y;

    if (x != y) {
      systemCase = false;
    }
  }

  if (check && systemCase) {
    cout << "Accepted";
  } else if (check && ! systemCase) {
    cout << "Why Wrong!!!";
  } else {
    cout << "Wrong Answer";
  }
}
