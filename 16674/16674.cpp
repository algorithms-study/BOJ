#include <iostream>

using namespace std;

string s;
int arr[9];

int main() {
  cin >> s;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '2') {
      arr[2]++;
    } else if (s[i] == '0') {
      arr[0]++;
    } else if (s[i] == '1') {
      arr[1]++;
    } else if (s[i] == '8') {
      arr[8]++;
    } else {
      cout << 0;
      return 0;
    }
  }

  if ((arr[2] == arr[0]) && (arr[1] == arr[8]) && (arr[2] == arr[1]) && (arr[2] == arr[8])) {
    cout << 8;
  } else if (arr[2] >= 1 && arr[0] >= 1 && arr[1] >= 1 && arr[8] >= 1) {
    cout << 2;
  } else {
    cout << 1;
  }
}
