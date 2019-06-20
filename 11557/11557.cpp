#include <iostream>

using namespace std;

int T;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> T;

  for (int i = 0; i < T; i++) {
    int N;
    int max = 0;
    string school = "";

    cin >> N;

    for (int j = 0; j < N; j++) {
      string S;
      int L;

      cin >> S >> L;

      if (L > max) {
        max = L;
        school = S;
      }
    }
    cout << school << '\n';
  }
}
