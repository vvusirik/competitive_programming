#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

int n, x;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  vector<int> coins;
  for (int i = 0; i < n; ++i) {
    cin >> x;
    coins.push_back(x);
  }

  sort(coins.begin(), coins.end());
  llu res = 1;
  for (auto coin : coins) {
    if (coin <= res)
      res += coin;
    else
      break;
  }
  cout << res;
}
