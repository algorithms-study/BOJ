#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<string> s;

bool compare(string a, string b) {
  if (a.size() == b.size()) {
    return a < b;
  }

  return a.size() < b.size();
}

int main() {
  cin >> n;

  for (int i = 0; i < n; i++) {
    string str;
    cin >> str;

    s.push_back(str);
  }

  sort(s.begin(), s.end(), compare);

  s.erase(unique(s.begin(), s.end()), s.end());

  for (int i = 0; i < s.size(); i++) {
    cout << s[i] << '\n';
  }
}
