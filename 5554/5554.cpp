#include <iostream>

using namespace std;

int N, sum;

int main() {
  for (int i = 0; i < 4; i++) {
    cin >> N;
    sum += N;
  }

  cout << sum / 60 << '\n' << sum % 60;
}
