#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

llu n, p;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  // Greedy: find median stick length
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; ++i) {
    cin >> p;
    v.push_back(p);
  }

  sort(v.begin(), v.end());
  int median = v[n / 2];
  llu ans = 0;
  for (int i = 0; i < n; ++i) {
    ans += abs(v[i] - median);
  }
  cout << ans;
}
