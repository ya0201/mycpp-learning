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

int solution(int X, int Y, int D){
  return std::ceil((Y - X) * 1.0 / D);
}

#ifdef THIS_IS_MY_LOCAL_PC
int main(void) {
  int x = 10, y = 85, d = 30;
  cout << solution(x, y, d) << endl;
  return 0;
}
#endif
