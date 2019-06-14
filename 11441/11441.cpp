#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> s;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N;

  s.resize(N);
  for (int i = 1; i <= N; i++) {
    int k;
    cin >> k;

    s[i] = s[i - 1] + k;
  }

  cin >> M;

  for (int i = 0; i < M; i++) {
    int x, y, sum = 0;
    cin >> x >> y;

    cout << s[y] - s[x - 1] << '\n';
  }
}
