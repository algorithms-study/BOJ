#include <iostream>
#include <vector>

using namespace std;

int sum;
string s;
vector<int> v(10, 0);

int main() {
  cin >> s;

  for (int i = 0; i < s.length(); i++) {
    v[s[i] - '0']++;
  }

  for (int i = 0; i < v.size(); i++) {
    if (i != 6 && i != 9) {
      sum = max(v[i], sum);
    }
  }

  cout << max((v[6] + v[9] + 1) / 2, sum);
}
