#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

llu n;
llu MOD = 1000000007;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  llu res = 1;
  for (llu i = 0; i < n; ++i) {
    res = ((res % MOD) * 2) % MOD;
  }
  cout << res;
}
