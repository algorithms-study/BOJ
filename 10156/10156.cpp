#include <iostream>

using namespace std;

int K, N, M;

int main() {
  cin >> K >> N >> M;

  cout << ((M >= K * N) ? 0 : (K * N) - M);
}
