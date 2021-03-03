#include <climits>
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

double get_slice_average(const vi &sums, int left, int right) {
  return (sums[right + 1] - sums[left]) * 1.0 / (right - left + 1);
}

int solution(vector<int> &A){
  vi sums;
  int N = A.size();

  sums.push_back(0);
  for (int i = 0; i < N; i++) {
    sums.push_back(sums[i] + A[i]);
  }

  double min=INT_MAX;
  int result;
  for (int left = 0; left < N-1; left++) {
    double d = get_slice_average(sums, left, left + 1);
    if (d < min) {
      min = d;
      result = left;
    }

    if (left != N-2) {
      d = get_slice_average(sums, left, left + 2);
      if (d < min) {
        min = d;
        result = left;
      }
    }
  }

  return result;
}

#ifdef THIS_IS_MY_LOCAL_PC
int main(void) {
  vi a = {4,2,2,5,1,5,8};
  cout << solution(a) << endl;
  // for (int i: solution(n)) {
  //   cout << i;
  // }
  // cout << endl;
  return 0;
}
#endif
