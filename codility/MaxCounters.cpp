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
#include <array>
#if __has_include("local-header.h")
  #define THIS_IS_MY_LOCAL_PC 1
#endif
using namespace std;
typedef long long ll;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using si = set<int>;
using usi = unordered_set<int>;

#define INF 1000000000000 //10^12:∞
#define MOD 1000000007 //10^9+7:合同式の法
#define MAXR 100000 //10^5:配列の最大のrange

vi solution(int N, vi &A){
  vi ctr = vi(N, 0);
  int max = 0, reset = 0;

  for (int i: A) {
    if (i == N+1) {
      reset = max;
    } else {
      if (ctr[i-1] < reset) {
        ctr[i-1] = reset + 1;
      } else {
        ctr[i-1] += 1;
      }
      if (ctr[i-1] > max) max = ctr[i-1];
    }
  }

  for (int i = 0; i < ctr.size(); i++) {
    if (ctr[i] < reset) ctr[i] = reset;
  }

  return ctr;
}

#ifdef THIS_IS_MY_LOCAL_PC
int main(void) {
  int n = 5;
  vi a = {3,4,4,6,1,4,4};
  // cout << solution(n, a) << endl;
  for (int i: solution(n, a)) {
    cout << i << ",";
  }
  cout << endl;
  return 0;
}
#endif
