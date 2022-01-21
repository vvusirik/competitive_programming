#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  multiset<int> prices;
  for (int i = 0; i < n; ++i) {
    int h;
    cin >> h;
    prices.insert(h);
  }

  int t;
  for (int i = 0; i < m; ++i) {
    cin >> t;
    // iterator to first price that goes after t
    auto best_price = prices.upper_bound(t);

    if (best_price == prices.begin())
      cout << "-1"
           << "\n";
    else {
      cout << *(--best_price) << "\n";
      prices.erase(best_price);
    }
  }
}
