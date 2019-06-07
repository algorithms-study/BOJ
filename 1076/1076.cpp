#include <iostream>
#include <string>
#include <cmath>

using namespace std;

#define MAX_INPUT 3
#define MAX_COLORS 10

long long result;
string colors[10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};

int main() {
  for (int i = 0; i < MAX_INPUT; i++) {
    string s;
    cin >> s;

    for (int j = 0; j < MAX_COLORS; j++) {
      if (s == colors[j]) {
        if (i == 0) {
          result = j * 10;
        } else if (i == 1) {
          result += j;
        } else {
          result *= pow(10, j);
        }
      }
    }
  }

  cout << result;
}
