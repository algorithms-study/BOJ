#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int t;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> t;

  for (int i = 0; i < t; i++) {
    int n, p1_count = 0, p2_count = 0;
    cin >> n;

    for (int j = 0; j < n; j++) {
      char p1, p2;
      cin >> p1 >> p2;

      // R > S
      // S > P
      // P > R
      if (p1 == p2) {
        p1_count++, p2_count++;
      } else if ((p1 == 'R' && p2 == 'S') || (p1 == 'S' && p2 == 'P') || (p1 == 'P' && p2 == 'R')) {
        p1_count++;
      } else if ((p2 == 'R' && p1 == 'S') || (p2 == 'S' && p1 == 'P') || (p2 == 'P' && p1 == 'R')) {
        p2_count++;
      }
    }

    if (p1_count == p2_count) {
      cout << "TIE" << '\n';
    } else if (p1_count > p2_count) {
      cout << "Player 1" << '\n';
    } else {
      cout << "Player 2" << '\n';
    }
  }
}
