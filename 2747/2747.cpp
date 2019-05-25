#include <iostream>

using namespace std;

int n;

int fibo(int num) {
  int a = 0, b = 1, tmp;
  
  if (num == 0 || num == 1) {
    return num;
  }

  for (int i = 0; i < num - 1; i++) {
    tmp = b;
    b = a + b;
    a = tmp;
  }

  return b;
}

int main() {
  cin >> n;
  cout << fibo(n);
}
