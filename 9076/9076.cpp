#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int i = 0; i < T; i++) {
    int n, sum = 0, maximum = -1e9, minimum = 1e9;
    vector<int> score(5, 0);

    for (int j = 0; j < 5; j++) {
      cin >> n;
      score[j] = n;

      if (maximum < score[j]) {
        maximum = score[j];
      }

      if (minimum > score[j]) {
        minimum = score[j];
      }
    }

    sort(score.begin(), score.end());

    if (score[score.size() - 2] - score[1] >= 4) {
      cout << "KIN" << '\n';
      continue;
    }

    for (int j = 1; j <= score.size() - 2; j++) {
      sum += score[j];
    }
    
    cout << sum << '\n';
  }
}
