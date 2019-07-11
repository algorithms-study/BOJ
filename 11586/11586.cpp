#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, K;
vector<string> v;

int main() {
  cin >> N;

  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    
    v.push_back(s);
  }

  cin >> K;

  if (K == 1) {
    for (int i = 0; i < N; i++) {
      cout << v[i] << '\n';
    }
  } else if (K == 2) { // 좌/우로 반전
    for (int i = 0; i < N; i++) {
      reverse(v[i].begin(), v[i].end());
      cout << v[i] << '\n';
    }
  } else if (K == 3) { // 상/하로 반전
    for (int i = N - 1; i >= 0; i--) {
      cout << v[i] << '\n';
    }
  }
}
