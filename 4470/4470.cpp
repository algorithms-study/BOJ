#include <iostream>

using namespace std;

int N;

int main() {
  cin >> N;
  getchar();
  
  for (int i = 0; i < N; i++) {
    string s;
    getline(cin, s);

    cout << i + 1 << ". " << s << '\n';
  }
}
