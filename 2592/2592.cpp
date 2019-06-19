#include <iostream>
#include <vector>
#include <algorithm>
#define MAX_INPUT 10

using namespace std;

int sum, a, b;
vector<int> v(1001, 0);

int main() {
  for (int i = 0; i < MAX_INPUT; i++) {
    int n;
    cin >> n;

    v[n]++;
    sum += n;
  }
  
  cout << sum / MAX_INPUT << '\n';

  for (int i = 0; i < 1001; i++) {
    if (a < v[i]) {
      a = v[i];
      b = i;
    }
  }
  
  cout << b;
}
