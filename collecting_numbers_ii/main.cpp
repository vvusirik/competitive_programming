#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

int n, m, a, b;
int main() {
    // WIP 
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;
  int nums[(int)2e5];

  int x;
  for (int i = 1; i < n + 1; ++i) {
    cin >> x;
    nums[x] = i;
  }

  set<pair<int, int>> inversions;
  int inversions_before;
  int inversions_after;
  int xa, xb;
  for (int i = 0; i < m; ++i) {
    cin >> a >> b;
    if (a - 1 > 0)
      inversions.insert({a - 1, b});
    if (a + 1 <= n)
      inversions.insert({a + 1, b});
    if (b - 1 > 0)
      inversions.insert({a, b - 1});
    if (b + 1 <= n)
      inversions.insert({a, b + 1});


  }
}
