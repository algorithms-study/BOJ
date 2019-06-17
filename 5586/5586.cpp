#include <iostream>

using namespace std;

string s;
int JOI, IOI;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  cin >> s;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'J' && s[i + 1] == 'O' && s[i + 2] == 'I') {
      JOI++;
    } else if (s[i] == 'I' && s[i + 1] == 'O' && s[i + 2] == 'I') {
      IOI++;
    }
  }

  cout << JOI << '\n' << IOI;
}
