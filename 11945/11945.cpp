#include <iostream>
#include <vector>

using namespace std;

int N, M;

int main() {
  cin >> N >> M;

  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;

    for (int j = s.length() - 1; j >= 0; j--) {
      cout << s[j];
    }

    cout << '\n';
  }
}
