#include <iostream>

using namespace std;

string s;

int main() {
  cin >> s;
  
  for (int i = 0; i < s.length(); i++) {
    cout << ((s[i] >= 'A' && s[i] <= 'Z') ? s[i] += 32 : s[i] -= 32);
  }
}
