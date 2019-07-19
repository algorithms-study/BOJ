#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
double sum;
vector<int> v;
vector<int> d(8001, 0);

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N;
  
  v.resize(N);

  for (int i = 0; i < N; i++) {
    cin >> v[i];
    sum += v[i];
    d[v[i] + 4000]++;
  }

  // 산술평균
  cout << int((sum / N >= 0 ? sum / N + 0.5 : sum / N - 0.5)) << '\n';

  // 중앙값
  sort(v.begin(), v.end());
  cout << v[v.size() / 2] << '\n';

  // 최빈값 : N개의 수들 중 가장 많이 나타나는 값
  bool check = false;
  int value = 0, maximum = -1e9;
    
  for (int i = 0; i < d.size(); i++) {
    if (maximum < d[i]) {
      maximum = d[i];
      value = i - 4000;
      check = true;
    } else if (maximum == d[i] && check) {
      maximum = d[i];
      value = i - 4000;
      check = false;
    }
  }

  cout << value << '\n';

  // 범위
  cout << v[v.size() - 1] - v[0];
}
