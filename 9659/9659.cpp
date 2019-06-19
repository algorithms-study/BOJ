#include <iostream>

using namespace std;

long long N;

int main() {
  cin >> N;

  cout << (((N / 3) + (N % 3)) % 2 == 0 ? "CY" : "SK");
}

