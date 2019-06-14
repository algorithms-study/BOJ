#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<int> s;

int main() {
  cin >> N;

  for (int i = 0; i < N; i++) {
    int k;
    cin >> k;

    s.push_back(k);
  }

  cout << *min_element(s.begin(), s.end()) << " " << *max_element(s.begin(), s.end());
}
