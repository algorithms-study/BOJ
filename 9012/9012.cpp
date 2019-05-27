#include <iostream>
#include <stack>

using namespace std;

int n;

int main() {
  cin >> n;

  for (int i = 0; i < n; i++) {
    stack<char> stack;
    string s;
    cin >> s;

    int length = s.length();

    for (int j = 0; j < length; j++) {
      if (s[j] == '(') {
        stack.push(s[j]);
      } else {
        if (! stack.empty()) {
          if (stack.top() == '(') {
            stack.pop();
          }
        } else {
          stack.push(s[j]);
          break;
        }
      }
    }

    cout << (stack.empty() ? "YES" : "NO") << endl;
  }
}
