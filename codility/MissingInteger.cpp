#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include <iterator>
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

int solution(vector<int> &A){
  vi nums, filtered_a, ss;
  int N = A.size();
  for (int i = 1; i <= N+1; i++) {
    nums.push_back(i);
  }

  copy_if(A.begin(), A.end(), back_inserter(filtered_a), [](int i) { return i > 0; });
  sort(filtered_a.begin(), filtered_a.end());

  set_difference(nums.begin(), nums.end(), filtered_a.begin(), filtered_a.end(), back_inserter(ss));

  return *min_element(ss.begin(), ss.end());
}

#ifdef THIS_IS_MY_LOCAL_PC
int main(void) {
  // vi a = {1,3,6,4,1,2};
  // vi a = {1,2,3};
  vi a = {-1,-3};
  cout << solution(a) << endl;
  return 0;
}
#endif
