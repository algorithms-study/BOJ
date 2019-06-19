#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sum;
vector<int> v;

int main() {
  for (int i = 0; i < 5; i++) {
    int n;
    cin >> n;

    v.push_back(n);
    sum += n;
  }

  sort(v.begin(), v.end());

  cout << sum / 5 << '\n' << v[v.size() / 2];
}
