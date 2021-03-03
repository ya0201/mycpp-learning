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

int solution(vector<int> &A){
  bool zero = false;
  vi plus, minus;
  for(const auto i: A) {
    if (i > 0) {
      plus.push_back(i);
    } else if (i < 0) {
      minus.push_back(i);
    } else {
      zero = true;
    }
  }

  sort(plus.begin(), plus.end());
  sort(minus.begin(), minus.end());
  
  int v1=INT_MIN, v2=INT_MIN, v3=INT_MIN, v4=INT_MIN;
  if (plus.size() >= 3) v1 = plus[plus.size()-1] * plus[plus.size()-2] * plus[plus.size()-3];
  if (plus.size() >= 1 && minus.size() >= 2) v2 = plus[plus.size()-1] * minus[0] * minus[1];
  if (max(v1, v2) > 0) {
    return max(v1, v2);
  } else if (zero) {
    return 0;
  }

  if (minus.size() >= 3) v3 = minus[minus.size()-1] * minus[minus.size()-2] * minus[minus.size()-3];
  if (plus.size() >= 2 && minus.size() >= 1) v4 = minus[minus.size()-1] * plus[0] * plus[1];

  return max(v3, v4);
}

#ifdef THIS_IS_MY_LOCAL_PC
int main(void) {
  vi a = {-3,1,2,-2,5,6};
  cout << solution(a) << endl;
  // for (int i: solution(n)) {
  //   cout << i;
  // }
  // cout << endl;
  return 0;
}
#endif
