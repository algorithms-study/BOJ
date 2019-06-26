#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> friends;

int main() {
  cin >> N >> M;
  friends.resize(N + 1);

  for (int i = 0; i < M; i++) {
    int A, B;
    cin >> A >> B;

    friends[A]++;
    friends[B]++;
  }

  for (int i = 1; i < friends.size(); i++) {
    cout << friends[i] << '\n';
  }
}
