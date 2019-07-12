#include <iostream>
#include <vector>

using namespace std;

int L, R, sum, n = 2;
vector<int> v;

int main() {
  cin >> L;
  cin >> R;

  int pointer = 0;
  v.push_back(L * R / 100);

  while (true) {
    if (v[pointer] <= 5) {
      break;
    }

    v.push_back(v[pointer] * R / 100);
    pointer++;
  }

  for (int i = 0; i < v.size() - 1; i++) {
    sum += v[i] * n;
    n *= 2;
  }

  cout << sum;
}
