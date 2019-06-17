#include <iostream>
#include <vector>

using namespace std;

string S;
vector<int> alphabet(26, 0);

int main() {
  cin >> S;

  for (int i = 0; i < S.length(); i++) {
    alphabet[S[i] - 'a']++;
  }

  for (int i = 0; i < 26; i++) {
    cout << alphabet[i] << " ";
  }
}
