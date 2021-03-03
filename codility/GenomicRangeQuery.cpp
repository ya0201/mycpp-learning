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
using vli = valarray<int>;

#define INF 1000000000000 //10^12:∞
#define MOD 1000000007 //10^9+7:合同式の法
#define MAXR 100000 //10^5:配列の最大のrange

vi solution(string &S, vector<int> &P, vector<int> &Q){
  vi result;
  auto if_map = map<char, int>{
    {'A', 1}, 
    {'C', 2}, 
    {'G', 3}, 
    {'T', 4}
  };
  int N = S.length();

  // vvi ctrs;
  vector<vli> ctrs;
  // vi ctr0 = vi(4, 0);
  vli ctr0 = vli{0,0,0,0};
  ctrs.push_back(ctr0);

  for (int i = 1; i <= N; i++) {
    vli ctr;
    // copy(ctrs[i-1].begin(), ctrs[i-1].end(), back_inserter(ctr));
    ctr = ctrs[i-1];
    int index = if_map[S[i-1]] - 1;
    ctr[index]++;
    ctrs.push_back(ctr);
  }

  for (int i = 0; i < P.size(); i++) {
    vli ctr_in_range = ctrs[Q[i] + 1] - ctrs[P[i]];
    for (int j = 0; j < 4; j++) {
      if (ctr_in_range[j] > 0) {
        result.push_back(j+1);
        break;
      }
    }
  }

  return result;
}

#ifdef THIS_IS_MY_LOCAL_PC
int main(void) {
  string str = "CAGCCTA";
  vi P = {2,5,0};
  vi Q = {4,5,6};
  for (int i: solution(str, P, Q)) {
    cout << i;
  }
  cout << endl;
  return 0;
}
#endif
