#include <iostream>

using namespace std;

int N;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  cin >> N;

  for (int i = 0; i < N; i++) {
    string x, y;
    cin >> x >> y;

    cout << "Distances: ";

    for (int j = 0; j < x.length(); j++) {
      if (x[j] <= y[j]) {
        cout << y[j] - x[j] << " ";
      } else if (x[j] > y[j]) {
        cout << (y[j] + 26) - x[j] << " ";
      }
    }

    cout << '\n';
  }
}
