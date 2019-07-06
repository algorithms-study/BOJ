#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maximum = -1e9;
vector<int> v;

int main() {
  v.resize(4);

  for (int i = 0; i < 4; i++) {
    cin >> v[i];
  }

  for (int i = 0; i < 2; i++) {
    int x;
    cin >> x;

    if (maximum < x) {
      maximum = x;
    }
  }

  sort(v.begin(), v.end(), greater<int>());

  cout << v[0] + v[1] + v[2] + maximum;
}
