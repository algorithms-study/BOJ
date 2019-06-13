#include <iostream>

using namespace std;

string jaehwan, doctor;

int main() {
  cin >> jaehwan;
  cin >> doctor;

  cout << (jaehwan.length() >= doctor.length() ? "go" : "no");
}
