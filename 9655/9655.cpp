#include <iostream>

using namespace std;

int N, sum;

int main() {
  cin >> N;

  cout << (((N / 3) + (N % 3)) % 2 == 0 ? "CY" : "SK");
}

