#include <iostream>

using namespace std;

int score[2];

int main() {
  for (int i = 0; i < 2; i++) {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    score[i] = A + B + C + D;
  }

  cout << (score[0] >= score[1] ? score[0] : score[1]);
}
