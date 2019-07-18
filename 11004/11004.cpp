#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long N, K, count;
vector<long long> v;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N >> K;

  v.resize(N);

  for (int i = 0; i < N; i++) {
    cin >> v[i];
  }

  nth_element(v.begin(), v.begin() + K - 1, v.end());

  cout << v[K - 1];
}
