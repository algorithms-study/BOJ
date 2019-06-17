#include <iostream>

using namespace std;

int N;
bool arr[5];
bool check = true;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  for (int i = 0; i < 5; i++) {
    string person;
    cin >> person;

    for (int j = 0; j < person.length(); j++) {
      if (person[j] == 'F' && person[j + 1] == 'B' && person[j + 2] == 'I') {
        arr[i] = true;
        check = false;
        break;
      }
    }
  }

  if (check) {
    cout << "HE GOT AWAY!";
    return 0;
  }

  for (int i = 0; i < 5; i++) {
    if (arr[i]) {
      cout << i + 1 << (i != 4 ? " " : "");
    }
  }
}
