#include <iostream>

using namespace std;

int A, B, C, D;

int main() {
  cin >> A >> B;
  cin >> C >> D;

  cout << min(B + C, A + D);
}
