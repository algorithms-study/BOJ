#include <iostream>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int i = 0; i < T; i++) {
    int N, sum = 0;
    double GPA = 0;
    
    cin >> N;

    for (int j = 0; j < N; j++) {
      int C;
      double G;
      cin >> C >> G;

      sum += C;
      GPA += (C * G);
    }

    cout << fixed;
    cout.precision(1);

    // 3 * 4.3 + 2 * 2.0 + 4 * 0.0 + 2 * 4.0 / (3 + 2 + 4 + 2)
    cout << sum << ' ' << GPA / sum << '\n';
  }
}
