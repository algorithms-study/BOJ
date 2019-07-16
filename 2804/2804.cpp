#include <iostream>

using namespace std;

int x, y;
string A, B;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> A >> B;

  for (int i = 0; i < A.length(); i++) {
    bool check = true;

    for (int j = 0; j < B.length(); j++) {
      if (A[i] == B[j]) {
        x = j;
        y = i;
        check = false;
        break;
      }
    }

    if (! check) {
      break;
    }
  }

  for (int i = 0; i < B.length(); i++) {
    for (int j = 0; j < A.length(); j++) {
      if (i == x) {
        cout << A;
        break;
      } else if (j == y && i != x) {
        cout << B[i];
      } else {
        cout << ".";
      }
    }
    cout << '\n';
  }
}
