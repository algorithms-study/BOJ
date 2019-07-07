#include <iostream>

using namespace std;

int X;
string Y;

int main() {
  cin >> X;
  cin >> Y;

  for (int i = 2; i >= 0; i--) {
    cout << X * int(Y[i] - '0') << '\n';
  }

  cout << X * stoi(Y);
}
