#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int> alphabet(26, 0);
bool check = false;

int main() {
  cin >> N;

  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    
    alphabet[s[0] - 'a']++;
  }

  for (int i = 0; i < alphabet.size(); i++) {
    if (alphabet[i] >= 5) {
      cout << char('a' + i);
      check = true;
    }
  }

  if (! check) {
    cout << "PREDAJA";
  }
}
