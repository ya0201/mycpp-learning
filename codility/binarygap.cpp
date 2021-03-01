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
  #include "local-header.h"
#endif
using namespace std;
typedef long long ll;
using vi = vector<int>;
using vvi = vector<vector<int>>;

#define INF 1000000000000 //10^12:∞
#define MOD 1000000007 //10^9+7:合同式の法
#define MAXR 100000 //10^5:配列の最大のrange

string ltrim(string str, char c) {
  size_t pos = str.find_first_not_of(c);
  return str.substr(pos);
}

int solution(int N){
  // http://code-mynote.blogspot.com/2014/01/c2.html
  stringstream ss;
  ss << static_cast<std::bitset<64>>(N); // >> が重なると別の演算子として認識される場合があるのでスペース入れた
  string xbin = ltrim(ss.str(), '0');

  int result = 0, ctr = 0;
  int mode = 1;

  // find binary gap
  for (char c : xbin) {
    switch (mode) {
      case 1:
        if (c == '1') {
          continue;
        } else {
          mode = 0;
          ctr++;
        }
        break;
      case 0:
        if (c == '0') {
          ctr++;
          continue;
        } else {
          mode = 1;
          if (ctr > result) result = ctr;
          ctr = 0;
        }
        break;
    }
  }
  return result;
}

#ifdef THIS_IS_MY_LOCAL_PC
int main(void) {
  int n = 32;
  cout << solution(n) << endl;
  return 0;
}
#endif
