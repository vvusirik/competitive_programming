#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

int n, x, c;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> x;
  vector<int> coins;
  for (int i = 0; i < n; ++i) {
    cin >> c;
    coins.push_back(c);
  }

  vector<unsigned int> dp;
  dp.resize(10000001, INT_MAX);
  dp[0] = 0;
  int coin;
  for (int i = 1; i <= x; ++i) {
    dp[i] = INT_MAX;
    for (int c = 0; c < n; ++c) {
      coin = coins[c];
      if (i - coin >= 0)
        dp[i] = min(dp[i], 1 + dp[i - coin]);
    }
  }

  if (dp[x] < INT_MAX)
    cout << dp[x];
  else
    cout << -1;
}
