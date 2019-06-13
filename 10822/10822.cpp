#include <iostream>

using namespace std;

string S;
int sum, tmp;

int main() {
  cin >> S;

  for (int i = 0; i < S.length(); i++) {
    if (S[i] != ',') {
      tmp = tmp * 10 + (S[i] - '0');
    } else if (S[i] == ',') { // 컴마가 만날 때 더해줌
      sum += tmp;
      tmp = 0;
      continue;
    }
  }

  // 마지막은 컴마가 만나지 않음으로써 tmp 를 더해줌
  cout << tmp + sum;
}
