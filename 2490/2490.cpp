#include <iostream>

using namespace std;

#define WIDTH 4
#define HEIGHT 3

int main() {
  for (int i = 0; i < HEIGHT; i++) {
    int count = 0;

    for (int j = 0; j < WIDTH; j++) {
      int n;
      cin >> n;
      count += n;
    }

    switch (count) {
      case 0:
        cout << "D" << endl;
        break;
      case 1:
        cout << "C" << endl;
        break;
      case 2:
        cout << "B" << endl;
        break;
      case 3:
        cout << "A" << endl;
        break;
      case 4:
        cout << "E" << endl;
        break;
    } 
  }
}
