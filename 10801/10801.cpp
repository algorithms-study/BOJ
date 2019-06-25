#include <iostream>
#include <vector>

using namespace std;

vector<int> a;
vector<int> b;
int countA, countB;

int main() {
  a.resize(10);
  b.resize(10);

  for (int i = 0; i < 10; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < 10; i++) {
    cin >> b[i];
  }

  for (int i = 0; i < 10; i++) {
    if (a[i] > b[i]) {
      countA++;
    } else if (a[i] < b[i]) {
      countB++;
    }
  }

  if (countA == countB) {
    cout << "D";
    return 0;
  }

  cout << (countA > countB ? "A" : "B");
}
