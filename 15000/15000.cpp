#include <iostream>

using namespace std;

string S;

int main() {
  cin >> S;

  for (int i = 0; i < S.length(); i++) {
    S[i] = toupper(S[i]);
  }
  cout << S;
}
