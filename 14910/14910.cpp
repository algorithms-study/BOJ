#include <iostream>

using namespace std;

int N;
bool check = true;

int main() {
  int prev = -1000000;
  
  while (cin >> N) {
    if (prev > N) {
      check = false;
    }

    prev = N;
  }

  cout << (check ? "Good" : "Bad");
}
