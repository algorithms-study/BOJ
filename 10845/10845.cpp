#include <iostream>
#include <queue>

using namespace std;

int main() {
  queue<int> queue;
  int n;

  cin >> n;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    if (s == "push") {
      int p;
      cin >> p;
      queue.push(p);
    } else if (s == "pop") {
      if (queue.empty()) {
        cout << "-1" << endl;
      } else {
        cout << queue.front() << endl;
        queue.pop();
      }
    } else if (s == "size") {
      cout << queue.size() << endl;
    } else if (s == "empty") {
      if (queue.empty()) {
        cout << "1" << endl;
      } else {
        cout << "0" << endl;
      }
    } else if (s == "front") {
      if (queue.empty()) {
        cout << "-1" << endl;
      } else {
        cout << queue.front() << endl;
      }
    } else if (s == "back") {
      if (queue.empty()) {
        cout << "-1" << endl;
      } else {
        cout << queue.back() << endl;
      }
    }
  }
}
