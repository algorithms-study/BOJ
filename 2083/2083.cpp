#include <iostream>

using namespace std;

int main() {
  while (true) {
    string name;
    int age, height;

    cin >> name >> age >> height;

    if (name == "#" && age == 0 && height == 0) {
      break;
    }

    cout << name << " ";
    if (age > 17 || height >= 80) {
      cout << "Senior" << '\n';
    } else {
      cout << "Junior" << '\n';
    }
  }
}
