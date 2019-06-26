#include <iostream>
#include <string>
#include <vector>

using namespace std;

string s;
string merge = "";
vector<string> v;

int main() {
  getline(cin, s);
  
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == ' ') {
      v.push_back(merge);
      merge = "";
    } else {
      merge += s[i];
    }

    if (i == s.length() - 1) {
      v.push_back(merge);
    }
  }

  cout << (char)toupper(v[0][0]);

  for (int i = 1; i < v.size(); i++) {
    if (v[i] != "i" && v[i] != "pa" && v[i] != "te" && v[i] != "ni" && v[i] != "niti" && v[i] != "a" && v[i] != "ali" && v[i] != "nego" && v[i] != "no" && v[i] != "ili") {
      cout << (char)toupper(v[i][0]);
    }
  }
}
