#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, sum;
vector<int> v;

int main() {
  cin >> N;

  v.resize(N);

  for (int i = 0; i < N; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  for (int i = 0; i < v.size(); i++) {
    for (int j = 0; j <= i; j++) {
      sum += v[j];
    }
  }

  cout << sum;
}
