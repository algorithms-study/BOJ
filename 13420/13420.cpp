#include <iostream>

using namespace std;

int N;
long long A, B, C;
char symbol, is;

int main() {
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> A >> symbol >> B >> is >> C;
    
    switch (symbol) {
      case '*':
        cout << (A * B == C ? "correct" : "wrong answer") << endl;
        break;
      case '/':
        cout << (A / B == C ? "correct" : "wrong answer") << endl;
        break;
      case '+':
        cout << (A + B == C ? "correct" : "wrong answer") << endl;
        break;
      case '-':
        cout << (A - B == C ? "correct" : "wrong answer") << endl;
        break;
    }
  }
}
