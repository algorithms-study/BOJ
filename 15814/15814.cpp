#include <iostream>
#include <string>

using namespace std;

string S;
int T;

int main() {
  cin >> S;
  cin >> T;

  for (int i = 0; i < T; i++) {
    int A, B;
    cin >> A >> B;

    swap(S[A], S[B]);
  }

  cout << S;
}
