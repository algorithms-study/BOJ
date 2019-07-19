#include <iostream>
#include <stack>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  while (true) {
    string s;
    bool check = true;
    stack<char> stack;
    getline(cin, s);

    if (s == ".") {
      break;
    }

    for (int i = 0; i < s.length(); i++) {
      if (s[i] == '(') {
        stack.push('(');
      } else if (s[i] == '[') {
        stack.push('[');
      } else if (s[i] == ')') {
        if (stack.empty() || stack.top() != '(') {
          check = false;
          break;
        } else {
          stack.pop();
        }
      } else if (s[i] == ']') {
        if (stack.empty() || stack.top() != '[') {
          check = false;
          break;
        } else {
          stack.pop();
        }
      }
    }

    cout << (check && stack.empty() ? "yes" : "no") << '\n';
  }
}
