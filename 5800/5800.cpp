#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int K;

int main() {
  cin >> K;

  for (int i = 0; i < K; i++) {
    int N;
    vector<int> score;
    cin >> N;

    for (int j = 0; j < N; j++) {
      int k;
      cin >> k;
      score.push_back(k);
    }

    sort(score.begin(), score.end(), greater<int>());

    int gap = -1e9;
    for (int i = 0; i < score.size() - 1; i++) {
      gap = max(gap, score[i] - score [i + 1]);
    }

    cout << "Class " << i + 1 << '\n';
    cout << "Max " << score[0] << ", Min " << score[score.size() - 1] << ", Largest gap " << gap << '\n';
  }
}
