#include <iostream>
#include <vector>

using namespace std;

int K, sum;
vector<int> v;

int main() {
  cin >> K;

  for (int i = 0; i < K; i++) {
    int t;
    cin >> t;

    if (t == 0) {
      v.pop_back();
    } else {
      v.push_back(t);
    }
  }

  for (int i = 0; i < v.size(); i++) {
    sum += v[i];
  }

  cout << sum;
}
