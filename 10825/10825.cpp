#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

int N;
vector<tuple <string, int, int, int> > v;

/**
국어 점수가 감소하는 순서로
국어 점수가 같으면 영어 점수가 증가하는 순서로
국어 점수와 영어 점수가 같으면 수학 점수가 감소하는 순서로
모든 점수가 같으면 이름이 사전 순으로 증가하는 순서로 (단, 아스키 코드에서 대문자는 소문자보다 작으므로 사전순으로 앞에 온다.)

name, korean, english, math
*/

bool compare(const tuple<string, int, int, int> a, const tuple<string, int, int, int> b) {
  if (get<1>(a) > get<1>(b)) { // korean
    return true; 
  } else if (get<1>(a) == get<1>(b)) { // korean
    if (get<2>(a) < get<2>(b)) {
      return true;
    } else if (get<2>(a) == get<2>(b)) { // english
      if (get<3>(a) > get<3>(b)) { // math
        return true;
      } else if (get<3>(a) == get<3>(b)) { // math
        return get<0>(a) < get<0>(b); // name
      }
    }
  }

  return false;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N;

  for (int i = 0; i < N; i++) {
    string name;
    int korean, english, math;
    cin >> name >> korean >> english >> math;

    v.push_back(make_tuple(name, korean, english, math));
  }

  sort(v.begin(), v.end(), compare);

  for (int i = 0; i < N; i++) {
    cout << get<0>(v[i]) << '\n';
  }
}
