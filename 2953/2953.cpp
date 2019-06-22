#include <iostream>

using namespace std;

int maxS, maxId;

int main() {
  for (int i = 0; i < 5; i++) {
    int sum = 0;
    for (int j = 0; j < 4; j++) {
      int n;
      cin >> n;

      sum += n;

      if (j == 3) {
        if (maxS < sum) {
          maxS = sum;
          maxId = i + 1;
        }
      }
    }
  }

  cout << maxId << ' ' << maxS;
}
