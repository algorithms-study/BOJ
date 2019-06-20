#include <iostream>
#include <string>

using namespace std;

string n;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;

  // 710 = 10 + 7 = 17
  // 9910 = 99 + 10 = 109
  if (n[n.length() - 1] == '0') {
    cout << stoi(n.substr(0, n.length() - 2)) + 10;
  } else {
    cout << stoi(n.substr(0, n.length() - 1)) + n[n.length() - 1] - '0';
  }
}
