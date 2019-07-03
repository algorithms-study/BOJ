#include <iostream>

using namespace std;

int sum;

int main() {
  for (int i = 0; i < 5; i++) {
    int A;
    cin >> A;

    sum += A;
  }

  cout << sum;
}
