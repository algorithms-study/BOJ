#include <iostream>

using namespace std;

// Earth, Sun, Mars
int E, S, M, count = 1;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> E >> S >> M;

  while (true) {
    if ((count - E) % 15 == 0 && (count - S) % 28 == 0 && (count - M) % 19 == 0) {
      break;
    }
    count++;
  }

  cout << count;
}
