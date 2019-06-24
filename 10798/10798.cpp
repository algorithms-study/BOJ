#include <iostream>
#include <vector>

using namespace std;

vector<string> v(5);

int main() {
  for (int i = 0; i < 5; i++) {
    string s;
    cin >> s;

    v[i] = s;
  }
  
  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 5; j++) {
      if (! v[j][i]) {
        continue;
      }
      
      cout << v[j][i];
    }
  }
}
