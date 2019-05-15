#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
  int n;
  vector<int> s;

  scanf("%d", &n);

  s.resize(n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &s[i]);
  }

  sort(s.begin(), s.end());
  for (int i = 0; i < n; i++) {
    printf("%d\n", s[i]);
  }

  return 0;
}
