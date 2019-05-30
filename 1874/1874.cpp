#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int n, j = 1;
vector<int> m;
vector<char> print;

int main() {
  stack<int> stack;

  cin >> n;

  m.resize(n);

  for (int i = 0; i < n; i++) {
    cin >> m[i];
  }

  stack.push(0);
  
  for (int i = 0; i < n; i++) {
    if (stack.top() > m[i]) {
      cout << "NO" << endl;
      return 0;
    }

    while (stack.top() != m[i]) {
      stack.push(j++);
      print.push_back('+');
    }

    stack.pop();
    print.push_back('-');
  }

  for (int i = 0; i < print.size(); i++) {
    cout << print[i] << endl;
  }
}
