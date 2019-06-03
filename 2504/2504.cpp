#include <iostream>
#include <stack>

using namespace std;

string s;
int sum = 0, tmp = 1;

int main() {
  stack<char> stack;

  cin >> s;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '(') {
      stack.push(s[i]);
      tmp *= 2;
    } else if (s[i] == '[') {
      stack.push(s[i]);
      tmp *= 3;
    } else if (s[i] == ')') {
      if (stack.empty() || stack.top() != '(') {
        cout << '0' << endl;
        return 0;
      }

      if (s[i - 1] == '(') {
        sum += tmp;
      }

      stack.pop();
      tmp /= 2;
    } else if (s[i] == ']') {
      if (stack.empty() || stack.top() != '[') {
        cout << '0' << endl;
        return 0;
      }

      if (s[i - 1] == '[') {
        sum += tmp;
      }

      stack.pop();
      tmp /= 3;
    }
  }

  cout << (stack.empty() ? sum : 0) << endl;
}
