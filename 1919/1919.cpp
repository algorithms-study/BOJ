#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int cnt;
string s1, s2;
vector<int> v1(26, 0);
vector<int> v2(26, 0);

int main() {
  cin >> s1;
  cin >> s2;

  for (int i = 0; i < s1.length(); i++) {
    v1[(s1[i] - '0') - 49]++;
  }

  for (int i = 0; i < s2.length(); i++) {
    v2[(s2[i] - '0') - 49]++;
  }

  for (int i = 0; i < max(v1.size(), v2.size()); i++) {
    cnt += max(v1[i], v2[i]) - min(v1[i], v2[i]);
  }

  cout << cnt;
}
