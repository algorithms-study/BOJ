#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  while (true) {
    int x, y;
    cin >> x >> y;

    if (x == 0 && y == 0) {
      break;
    }

    cout << (x > y ? "Yes" : "No") << '\n';
  }
}
