#include <iostream>
#include <algorithm>

using namespace std;

unsigned long long A, B;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> A >> B;

  if (A > B) {
    swap(A, B);
  }

  if (B > A) {
    cout << B - A - 1 << '\n';
    for (unsigned long long i = A + 1; i < B; i++) {
      cout << i << " ";
    }
  } else if (B == A) {
    cout << 0 << '\n';
  }
}
