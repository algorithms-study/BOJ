#include <iostream>

using namespace std;

string A, B;
char op;

int main() {
  cin >> A;
  cin >> op;
  cin >> B;

  if (op == '*') {
    cout << '1';

    for (int i = 0; i < A.length() + B.length() - 2; i++) {
      cout << '0';
    }
  } else {
    if (A.length() == B.length()) {
      cout << '2';

      for (int i = 0; i < A.length() - 1; i++) {
        cout << '0';
      }
    } else {
      int minimum = min(A.length() - 1, B.length() - 1);
      int maximum = max(A.length() - 1, B.length() - 1);

      cout << '1';
      for (int i = 0; i < maximum - minimum - 1; i++) {
        cout << '0';
      }

      cout << '1';
      for (int i = 0; i < minimum; i++) {
        cout << '0';
      }
    }
  }
}
