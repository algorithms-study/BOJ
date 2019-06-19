#include <iostream>
#include <vector>
#define INPUT 28

using namespace std;

vector<bool> check(30, false);

int main() {
  for (int i = 0; i < INPUT; i++) {
    int k;
    cin >> k;

    check[k] = true;
  }

  for (int i = 1; i <= check.size(); i++) {
    if (! check[i]) {
      cout << i << '\n';
    }
  }
}
