#include <iostream>

using namespace std;

int N, count;

int main() {
  cin >> N;
  
  for (int i = 0; i < 5; i++) {
    int k;
    cin >> k;

    if (N == k) {
      count++;
    }
  }

  cout << count;
}
