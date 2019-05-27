#include <iostream>

using namespace std;

int n, count;

int isPrime(int num) {
  int flag = 0;
  for (int i = 2; i <= num; i++) {
    if (num % i == 0) {
      flag++;
    }
  }

  if (flag == 1) {
    return 1;
  } 

  return 0;
}

int main() {
  cin >> n;

  for (int i = 0; i < n; i++) {
    int p;
    cin >> p;

    count += isPrime(p);
  }

  cout << count << endl;
}
