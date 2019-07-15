#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int> v;
vector<int> storage;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  cin >> N;

  v.resize(N);
  storage.resize(N);

  for (int i = 0; i < N; i++) {
    cin >> v[i];
  }

  int maximum = storage[0] = v[0];
  for (int i = 1; i < storage.size(); i++) {
    storage[i] = max(storage[i - 1] + v[i], v[i]);
    maximum = max(storage[i], maximum);
  }

  cout << maximum;
}
