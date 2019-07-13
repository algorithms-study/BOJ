#include <iostream>
#include <vector>

using namespace std;

int M;
vector<int> v(3, 0);

int main() {
  cin >> M;
  v[0] = 1;

  for (int i = 0; i < M; i++) {
    int X, Y;
    cin >> X >> Y;

    swap(v[X - 1], v[Y - 1]);
  }

  for (int i = 0; i < 3; i++) {
    if (v[i] == 1) {
      cout << i + 1;
    }
  }
}
