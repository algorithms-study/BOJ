#include <iostream>

using namespace std;

int count;
string H, N;

int main() {
  cin >> H;
  cin >> N;
  
  while (true) {
    if (H.find(N) == -1) {
      break;
    }
    
    H = H.substr(H.find(N) + N.length());
    count++;
  }

  cout << count;
}
