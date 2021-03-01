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
#include <map>
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

#define INF 1000000000000 //10^12:∞
#define MOD 1000000007 //10^9+7:合同式の法
#define MAXR 100000 //10^5:配列の最大のrange

vi solution(vi &A, int K){
  if (A.size() == 0) return A;

  int k2 = K % A.size();
  for (int i = 0; i < k2; i++) {
    rotate(A.rbegin(), A.rbegin()+1, A.rend());
  }
  return A;
}

#ifdef THIS_IS_MY_LOCAL_PC
int main(void) {
  vi a = {3, 8, 9, 7, 6};
  int k = 3;
  a = solution(a, k);
  for (int i: a) {
    cout << i;
  }
  cout << endl;
  return 0;
}
#endif
