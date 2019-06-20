#include <iostream>

using namespace std;

int n, count;

int main() {
  while (cin >> n) {
    if (n >= 1) {
      count++;
    }
  }

  cout << count++;
}
