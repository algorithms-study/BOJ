#include <iostream>
#include <queue>

using namespace std;

int M;
queue<int> q;

int main() {
  cin >> M;

  for (int i = 0; i < M; i++) {
    q.push(i + 1);
  }

  for (int i = 0; i < q.size(); i++) {
    cout << q.front() << " ";
    q.pop();
    
    i--;

    q.push(q.front());
    q.pop();
  }
}
