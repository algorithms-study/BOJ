#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<int> v(3);
string s;

int main() {
  for (int i = 0; i < 3; i++) {
    cin >> n;
    v[i] = n;
  }
  
  cin >> s;

  sort(v.begin(), v.end());

  for (int i = 0; i < 3; i++) {
    if (s[i] == 'A') {
      cout << v[0] << " ";
    } else if (s[i] == 'B') {
      cout << v[1] << " ";
    } else {
      cout << v[2] << " ";
    }
  }
}
