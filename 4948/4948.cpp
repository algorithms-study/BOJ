#include <iostream>
#include <vector>

using namespace std;

int n;
vector<bool> v(123456 * 2 + 1);
vector<int> s(v.size());

int main() {
  // 에라토스테네스 체
  for (int i = 2; i < v.size(); i++) {
    if (v[i]) {
      continue;
    }
    
    for (int j = i + i; j < v.size(); j += i) {
      v[j] = true;
    }
  }

  for (int i = 2; i < v.size(); i++) {
    if (! v[i]) {
      s[i]++;
    }

    s[i] += s[i - 1];
  }

  while (true) {
    cin >> n;

    if (n == 0) {
      break;
    }

    cout << s[2 * n] - s[n] << '\n';
  }
}
