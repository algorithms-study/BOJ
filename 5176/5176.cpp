#include <iostream>
#include <vector>

using namespace std;

int K;

int main() {
  cin >> K;

  for (int i = 0; i < K; i++) {
    int P, M, count = 0;
    cin >> P >> M;
    vector<bool> check(P, 0);

    for (int i = 0; i < P; i++) {
      int n;
      cin >> n;
      
      if (! check[n]) {
        check[n] = true;
      } else {
        count++;
      }
    }

    cout << count << '\n';
  }
}
