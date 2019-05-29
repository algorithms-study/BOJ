#include <iostream>

using namespace std;

int n, k, sum = 1;

int main() {  
  cin >> n >> k;

  for (int i = 2; i <= n; i++) {
    sum = (sum + k - 1) % i + 1;
  }

  cout << sum;
}
