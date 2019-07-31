#include <iostream>

using namespace std;

string encrypt = "";
string origin, salt;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  getline(cin, origin);
  cin >> salt;

  int saltLength = 0;

  for (int i = 0; i < origin.length(); i++) {
    if (origin[i] == ' ') {
      encrypt += ' ';
    } else if ((origin[i] - '0') - (salt[saltLength] - '0') <= 0) {
      encrypt += (origin[i] - '0') - (salt[saltLength] - '0') + 25 + 'a';
    } else {
      encrypt += (origin[i] - '0') - (salt[saltLength] - '0') - 1 + 'a';
    }

    saltLength++;

    if (saltLength == salt.length()) {
      saltLength = 0;
    }
  }

  cout << encrypt;
}
