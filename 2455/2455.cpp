#include <iostream>

using namespace std;

int result, maximum = -1e9;

int main() {
  for (int i = 0; i < 4; i++) {
    int out, in;
    cin >> out >> in;

    result += (in - out);

    maximum = max(result, maximum);
  }

  cout << maximum;
}
