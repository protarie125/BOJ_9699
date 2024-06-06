#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  for (auto c = 1; c <= n; ++c) {
    cout << "Case #" << c << ": ";
    auto mx = 0LL;
    for (auto j = 0; j < 5; ++j) {
      ll x;
      cin >> x;
      mx = max<ll>(mx, x);
    }
    cout << mx << '\n';
  }

  return 0;
}