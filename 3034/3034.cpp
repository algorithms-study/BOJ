#include <iostream>

using namespace std;

int N, W, H, box;

int main() {
  cin >> N >> W >> H;

  box = W * W + H * H;

  for (int i = 0; i < N; i++) {
    int T;
    cin >> T;

    cout << (box >= T * T ? "DA" : "NE") << '\n';
  }
}
