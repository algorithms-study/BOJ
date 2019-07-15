#include <iostream>

using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B;
  cin >> C;

//   14 30
//      20

  int H = A + C / 60;
  int M = B + C % 60;
  
  if (M >= 60) {
    M -= 60;
    H++;
  }

  if (H >= 24) {
    H %= 24;
  }

  cout << H << ' ' << M;
  return 0;
}
