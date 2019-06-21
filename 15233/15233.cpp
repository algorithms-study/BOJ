#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int A, B, G, A_count, B_count;
vector<string> A_Player;
vector<string> B_Player;

int main() {
  cin >> A >> B >> G;
  A_Player.resize(A);
  B_Player.resize(B);

  for (int i = 0; i < A; i++) {
    string name;
    cin >> name;
    A_Player[i] = name;
  }

  for (int i = 0; i < B; i++) {
    string name;
    cin >> name;
    B_Player[i] = name;
  }

  for (int i = 0; i < G; i++) {
    string name;
    cin >> name;

    if (find(A_Player.begin(), A_Player.end(), name) != A_Player.end()) {
      A_count++;
    } else {
      B_count++;
    }
  }

  if (A_count == B_count) {
    cout << "TIE";
  } else if (A_count > B_count) {
    cout << "A";
  } else {
    cout << "B";
  }
}
