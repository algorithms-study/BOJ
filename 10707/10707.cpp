#include <iostream>

using namespace std;

int A, B, C, D, P;

int main() {
  cin >> A; // X사의 1리터당 요금 A
  cin >> B; // Y사의 기본요금 B
  cin >> C; // Y사의 요금이 기본요금이 되는 사용량의 상한 C
  cin >> D; // Y사의 1리터 당 추가요금 D
  cin >> P; // JOI군의 집에서 사용하는 한 달간 수도의 양 P

  cout << min(A * P, (P < C ? B : B + (P - C) * D));
}
