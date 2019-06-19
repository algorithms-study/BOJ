#include <iostream>

using namespace std;

int count;
string S;

int main() {
  cin >> S;

  for (int i = 0; i < S.length(); i++) {
    if (S[i] == ',') {
      count++;
    }
  }

  cout << count + 1;
}
