#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> w;
vector<int> k;

int main() {
  for (int i = 0; i < 20; i++) {
    int score;
    cin >> score;

    if (i > 9) {
      k.push_back(score);
    } else {
      w.push_back(score);
    }
  }

  sort(w.begin(), w.end(), greater<int>());
  sort(k.begin(), k.end(), greater<int>());
  cout << w[0] + w[1] + w[2] << ' ' << k[0] + k[1] + k[2];
}
