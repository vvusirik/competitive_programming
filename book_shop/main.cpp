#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

int n, x, h, s;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> x;
  vector<array<int, 2>> price_pages;
  price_pages.resize(n);
  for (int i = 0; i < n; ++i) {
    cin >> h;
    price_pages[i][0] = h;
  }

  for (int i = 0; i < n; ++i) {
    cin >> s;
    price_pages[i][1] = s;
  }

  sort(price_pages.begin(), price_pages.end());

  int dp[n + 1][x + 1];
  for (int i = 0; i <= x; ++i) {
    dp[0][i] = 0;
  }

  for (int i = 0; i <= n; ++i) {
    dp[i][0] = 0;
  }

  for (int i = 1; i <= n; ++i) {
    for (int m = 1; m <= x; ++m) {
      int w = price_pages[i - 1][0];
      if (w <= m)
        dp[i][m] = max(dp[i - 1][m], dp[i - 1][m - w] + price_pages[i - 1][1]);
      else
        dp[i][m] = 0;
    }
  }

  cout << dp[n][x];
}
