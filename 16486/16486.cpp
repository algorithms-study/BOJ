#include <iostream>
#define PI 3.141592

using namespace std;

int d1, d2;

int main() {
  cin >> d1;
  cin >> d2;

  cout << fixed;
  cout.precision(6);
  
  cout << double(2 * d1) + double(2 * d2 * PI);
}
