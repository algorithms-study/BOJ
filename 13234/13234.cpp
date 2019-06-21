#include <iostream>

using namespace std;

string value1, value2, operation;

int main() {
  cin >> value1 >> operation >> value2;

  int a = (value1 == "true") ? 1 : 0;
  int b = (value2 == "true") ? 1 : 0;

  if (operation == "AND") {
    cout << ((a && b) == 1 ? "true" : "false");
  } else {
    cout << ((a || b) == 1 ? "true" : "false");
  }
}
