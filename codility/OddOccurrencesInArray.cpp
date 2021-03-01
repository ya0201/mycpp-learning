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
  for (int i: A) {
    if (usi.find(i) == usi.end()) {
      usi.insert(i);
    } else {
      usi.erase(i);
    }
  }

  return *usi.begin();
}

#ifdef THIS_IS_MY_LOCAL_PC
int main(void) {
  vi a = {9, 3, 9, 3, 9, 7, 9};
  int res = solution(a);
  cout << res << endl;
  return res;
}
#endif
