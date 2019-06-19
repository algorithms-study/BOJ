#include <iostream>

using namespace std;

int A_ATTACK, A_LIFE;
int B_ATTACK, B_LIFE;

int main() {
  cin >> A_ATTACK >> A_LIFE;
  cin >> B_ATTACK >> B_LIFE;

  while (true) {
    A_LIFE -= B_ATTACK;
    B_LIFE -= A_ATTACK;

    if (A_LIFE <= 0 || B_LIFE <= 0) {
      break;
    }
  }

  if (A_LIFE <= 0 && B_LIFE <= 0) {
    cout << "DRAW";
    return 0;
  }

  cout << (A_LIFE > B_LIFE ? "PLAYER A" : "PLAYER B");
}
