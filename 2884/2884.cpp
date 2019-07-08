#include <iostream>

using namespace std;

int H, M;

int main() {
  cin >> H >> M;

  if (M >= 45) {
    M -= 45;
  } else {
    // M 30
    H--;
    M += 15;

    if (H <= 0) {
      H = 23;
    }
  }

  cout << H << " " << M;
}
