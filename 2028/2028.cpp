#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int N;

int main() {
  cin >> N;
  
  for (int i = 0; i < N; i++) {
    int T;
    cin >> T;
    int p = pow(T, 2);
    string tmp = to_string(p);
    
    cout << (to_string(T) == tmp.substr(tmp.length() - to_string(T).length()) ? "YES" : "NO") << '\n';

  }
}
