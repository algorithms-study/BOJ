#include <iostream>

using namespace std;

int A, B, C;

int main() {
  cin >> A >> B;
  cin >> C;

  cout << (C * 2 > A + B ? A + B : (A + B) - C * 2);
}
