#include <iostream>
#include <string>

using namespace std;

int N;

int main() {
  cin >> N;

  for (int i = 0; i < N; i++) {
    string S;
    cin >> S;

    for (int j = 0; j < S.length(); j++) {
      if (S[j] >= 'A' && S[j] <= 'Z') {
        S[j] = tolower(S[j]);
      }
    }

    cout << S << '\n';
  }
}
