#include <iostream>
#include <vector>

using namespace std;

int count = 0;
vector<bool> check;

int main() {
  ios::sync_with_stdio(false);
  check.resize(10);

  for (int i = 0; i < 10; i++) {
    int n;
    cin >> n;

    if (! check[n % 42]) {
      count++;
    }

    check[n % 42] = true;
  }

  cout << count;
}
