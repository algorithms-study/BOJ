#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, sum;
vector<int> A, B;

int main() {
  cin >> N;

  A.resize(N);
  B.resize(N);

  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  for (int i = 0; i < N; i++) {
    cin >> B[i];
  }

  sort(A.begin(), A.end());
  sort(B.begin(), B.end(), greater<int>());

  for (int i = 0; i < N; i++) {
    sum += A[i] * B[i];
  }

  cout << sum;
}
