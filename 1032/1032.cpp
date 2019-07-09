#include <iostream>

using namespace std;

int N;
string s;

int main() {
  cin >> N;
  cin >> s;
  
  for (int i = 1; i < N; i++) {
    string v;
    cin >> v;
    
    for (int j = 0; j < s.length(); j++) {
      if (s[j] != v[j]) {
        s[j] = '?';
      }
    }
  }

  cout << s;
}
