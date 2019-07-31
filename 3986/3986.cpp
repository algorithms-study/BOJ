#include <iostream>
#include <stack>

using namespace std;

int N, cnt;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  cin >> N;

  for (int i = 0; i < N; i++) {
    stack<char> v;
    string s;
    cin >> s;

    for (int j = 0; j < s.length(); j++) {
      if (! v.empty() && v.top() == s[j]) {
        v.pop();
      } else {
        v.push(s[j]);
      }
    }

    cnt += v.empty();
  }

  cout << cnt;
}
