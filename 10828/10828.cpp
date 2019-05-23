#include <iostream>
#include <stack>

using namespace std;

int main() {
  int n;
  stack<int> stack;

  cin >> n;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    if (s == "push") {
      int p;
      cin >> p;
      stack.push(p);
    } else if (s == "pop") {
      if (! stack.empty()) {
        cout << stack.top() << endl;
        stack.pop();
      } else {
        cout << "-1" << endl;
      }      
    } else if (s == "top") {
      if (! stack.empty()) {
        cout << stack.top() << endl;
      } else {
        cout << "-1" << endl;
      }   
    } else if (s == "size") {
      cout << stack.size() << endl;
    } else if (s == "empty") {
      if (stack.empty()) {
        cout << "1" << endl;
      } else {
        cout << "0" << endl;
      }   
    }
  }
}
