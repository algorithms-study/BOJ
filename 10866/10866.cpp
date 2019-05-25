#include <iostream>
#include <deque>

using namespace std;

int main() {
  deque<int> deque;
  int n;

  cin >> n;

  /**
    push_front X: 정수 X를 덱의 앞에 넣는다.
    push_back X: 정수 X를 덱의 뒤에 넣는다.
    pop_front: 덱의 가장 앞에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
    pop_back: 덱의 가장 뒤에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
    size: 덱에 들어있는 정수의 개수를 출력한다.
    empty: 덱이 비어있으면 1을, 아니면 0을 출력한다.
    front: 덱의 가장 앞에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
    back: 덱의 가장 뒤에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
  */

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    if (s == "push_front") {
      int p;
      cin >> p;
      deque.push_front(p);
    } else if (s == "push_back") {
      int p;
      cin >> p;
      deque.push_back(p);
    } else if (s == "pop_front") {
      if (deque.empty()) {
        cout << "-1" << endl;
      } else {
        cout << deque.front() << endl;
        deque.pop_front();
      }
    } else if (s == "pop_back") {
      if (deque.empty()) {
        cout << "-1" << endl;
      } else {
        cout << deque.back() << endl;
        deque.pop_back();
      }
    } else if (s == "size") {
      cout << deque.size() << endl;
    } else if (s == "empty") {
      if (deque.empty()) {
        cout << "1" << endl;
      } else {
        cout << "0" << endl;
      }
    } else if (s == "front") {
      if (deque.empty()) {
        cout << "-1" << endl;
      } else {
        cout << deque.front() << endl;
      }
    } else if (s == "back") {
      if (deque.empty()) {
        cout << "-1" << endl;
      } else {
        cout << deque.back() << endl;
      }
    }
  }

}
