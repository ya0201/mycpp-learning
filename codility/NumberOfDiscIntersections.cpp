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
using pi = pair<int,int>;

#define INF 1000000000000 //10^12:∞
#define MOD 1000000007 //10^9+7:合同式の法
#define MAXR 100000 //10^5:配列の最大のrange

int solution(vi &A){
  int result = 0;
  int N = A.size();
  for (int l = 0; l < N-1; l++) {
    for (int r = l+1; r < N; r++) {
      pi left = pi(l-A[l], l+A[l]);
      pi right = pi(r-A[r], r+A[r]);
      if (left.second < right.first || left.first > right.second) {
        continue;
      } else {
        result++;
        if (result > 10000000) return -1;
      }
    }
  }

  return result;
}

#ifdef THIS_IS_MY_LOCAL_PC
int main(void) {
  vi a = {1,5,2,1,4,0};
  cout << solution(a) << endl;
  // for (int i: solution(n)) {
  //   cout << i;
  // }
  // cout << endl;
  return 0;
}
#endif
