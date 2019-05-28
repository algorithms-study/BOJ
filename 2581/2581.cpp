#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int m, n, min, sum;

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
  vector<int> arr;
  
  // m <= ... <= n
  cin >> m;
  cin >> n;

  for (int i = m; i <= n; i++) {
    if (isPrime(i)) {
      arr.push_back(i);

      sum += i;
    }
  }

  sort(arr.begin(), arr.end());

  if (sum != 0) {
    cout << sum << endl;
    cout << arr[0] << endl;
  } else {
    cout << "-1" << endl;
  }
}
