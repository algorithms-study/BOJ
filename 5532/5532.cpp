#include <iostream>

using namespace std;

int L, A, B, C, D;

int main() {
  cin >> L;
  cin >> A;
  cin >> B;
  cin >> C;
  cin >> D;

  cout << L - max(A % C == 0 ? A / C : A / C + 1, B % D == 0 ? B / D : B / D + 1);
}
