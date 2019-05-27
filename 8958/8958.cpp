#include <iostream>
#include <vector>

using namespace std;

int n;

int main() {
  cin >> n;

  for (int i = 0; i < n; i++) {
    int sum = 0, count = 0;
    string s;
    cin >> s;

    for (int j = 0; j < s.size(); j++) {
      if (s[j] == 'O') {
        count++;
      } else {
        count = 0;
      }

      sum += count;
    }

    cout << sum << endl;
  }
}
