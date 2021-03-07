#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include <vector>
#include <cstdio>
#include <cmath>
#include <queue>
#include <stack>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <string>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <thread>
#include <mutex>
#include <iomanip>
#include <bitset>
#include <sstream>
#include <numeric>
#include <valarray>
#if __has_include("local-header.h")
  #define THIS_IS_MY_LOCAL_PC 1
#endif
using namespace std;
typedef long long ll;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using si = set<int>;
using usi = unordered_set<int>;
using vai = valarray<int>;

#define INF 1000000000000 //10^12:∞
#define MOD 1000000007 //10^9+7:合同式の法
#define MAXR 100000 //10^5:配列の最大のrange

const int properly_nested = 1;
const int not_properly_nested = 0;

string mysubstr(const string &s, int start, int end) {
  if (end == -1) s.substr(start);
  int l = end - start + 1;
  return s.substr(start, l);
}

int solution(string &S){
  int N = S.length();
  if (N % 2 != 0) return not_properly_nested;

  char target = 0;
  vector<string> substrs;

  int left, right;
  for (int i = 0; i < N; i++) {
    if (target == 0) {
      left = i;
      switch (S[i]) {
        case '{':
          target = '}';
          break;
        case '(':
          target = ')';
          break;
        case '[':
          target = ']';
          break;
        default:
          return not_properly_nested;
      }
    } else if (S[i] == target) {
      target = 0;
      right = i;
      string substr = mysubstr(S, left, right);
      if (substr.length() % 2 != 0) return not_properly_nested;
      substrs.push_back(substr);
    }
  }

  if (target != 0) return not_properly_nested;

  for (const auto s: substrs) {
    cout << s << endl;
  }
  for (const auto s: substrs) {
    int n2 = s.length();
    if (n2 == 2) {
      continue;
    }

    auto tmp = mysubstr(s, 1, n2-2);
    if (solution(tmp) == not_properly_nested) {
      return not_properly_nested;
    }
  } return properly_nested;
}

#ifdef THIS_IS_MY_LOCAL_PC
int main(void) {
  // string s = "{[()()]}";
  // string s = "([)()]";
  string s = "({{({}[]{})}}[]{})";
  cout << solution(s) << endl;
  // for (int i: solution(n)) {
  //   cout << i;
  // }
  // cout << endl;
  return 0;
}
#endif
