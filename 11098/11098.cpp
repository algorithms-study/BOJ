#include <iostream>

using namespace std;

int n;

int main() {
  cin >> n;

  for (int i = 0; i < n; i++) {
    int p, maximum = 0;
    string player = "";
    cin >> p;

    for (int j = 0; j < p; j++) {
      int money;
      string name;
      cin >> money >> name;

      if (money > maximum) {
        maximum = money;
        player = name;
      }
    }
    
    cout << player << '\n';
  }
}
