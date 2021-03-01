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
#if __has_include("local-header.h")
  #define THIS_IS_MY_LOCAL_PC 1
  #include "local-header.h"
#endif
using namespace std;
typedef long long ll;

#define INF 1000000000000 //10^12:∞
#define MOD 1000000007 //10^9+7:合同式の法
#define MAXR 100000 //10^5:配列の最大のrange

int solution(int N){
  // http://code-mynote.blogspot.com/2014/01/c2.html
  stringstream ss;
  ss << static_cast<std::bitset<64>>(N);
  string xbin = ss.str();
  cout << xbin << endl;
  return 0;
}

#ifdef THIS_IS_MY_LOCAL_PC
int main(void) {
  int n = 255;
  cout << solution(n) << endl;
  return 0;
}
#endif
