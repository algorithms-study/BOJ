#include <iostream>

using namespace std;

int result;

int main() {
  for (int i = 0; i < 5; i++) {
    int n;
    cin >> n;

    result += n * n;
  }

  cout << result % 10;
}
