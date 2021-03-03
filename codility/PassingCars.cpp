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

int solution(vector<int> &A){
  int passings=0;
  int N = A.size();

  vi sums;
  sums.push_back(0);
  for (int i = 0; i < N; i++) {
    sums.push_back(sums[i] + A[i]);
  }

  for (int i = 0; i < N-1; i++) {
    if (A[i] == 0) passings += (sums[N] - sums[i+1]);
    if (passings > 1000000000) return -1;
  }
  return passings;
}

#ifdef THIS_IS_MY_LOCAL_PC
int main(void) {
  vi a = {0,1,0,1,1};
  cout << solution(a) << endl;
  // for (int i: solution(n)) {
  //   cout << i;
  // }
  // cout << endl;
  return 0;
}
#endif
