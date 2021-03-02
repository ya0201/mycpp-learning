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

int solution(vi &A){
  usi usi;
  int N = A.size();

  for(int i: A) {
    if (i >= 1 && i <= N) usi.insert(i);
  }

  if (usi.size() == N) {
    return 1;
  } else {
    return 0;
  }
}

#ifdef THIS_IS_MY_LOCAL_PC
int main(void) {
  vi a = {4,1,3};
  cout << solution(a) << endl;
  return 0;
}
#endif
