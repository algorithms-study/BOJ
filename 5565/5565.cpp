#include <iostream>

using namespace std;

int main() {
  int result, sum = 0;
  cin >> result;

  for (int i = 0; i < 9; i++) {
    int n;
    cin >> n;

    sum += n;
  }

  cout << result - sum;
}
