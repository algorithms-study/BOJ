#include <iostream>

using namespace std;

string S;
string merge = "";

int main() {
  cin >> S;

  for (int i = 0; i < S.length(); i++) {
    if (S[i] != 'C' && S[i] != 'A' && S[i] != 'M' && S[i] != 'B' && S[i] != 'R' && S[i] != 'I' && S[i] != 'D' && S[i] != 'G' && S[i] != 'E') {
        merge += S[i];
    }
  }

  cout << merge;
}
