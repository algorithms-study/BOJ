#include <iostream>
#include <string>

using namespace std;

int T;
int A, B;
char miss;

int main() {
  cin >> T;
  for (int i = 0; i < T; i++) {
    cin >> A >> miss >> B;
    cout << A + B << endl;
  }
}
