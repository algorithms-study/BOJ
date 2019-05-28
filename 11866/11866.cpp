#include <iostream>
#include <queue>

using namespace std;

int n, k;

int main() {  
  queue<int> queue;
  cin >> n >> k;

  for (int i = 1; i <= n; i++) {
    queue.push(i);
  }

  cout << "<";

  while (! queue.empty()) {
    for (int i = 0; i < k - 1; i++) {
      queue.push(queue.front());
      queue.pop();
    }

    cout << queue.front() << (queue.front() == queue.back() ? ">" : ", ");
    queue.pop();
  }
}
