#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

int n, a, b;
const int maxN = 2e5;
array<int, 2> intervals[maxN];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  // Greedy earliest deadline scheduling (sort by end time, count non
  // intersecting intervals)
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> intervals[i][1] >> intervals[i][0];
  }
  sort(intervals, intervals + n);

  int ans = 0;
  int x = 0;
  for (int i = 0; i < n; ++i) {
    if (intervals[i][1] >= x) {
      x = intervals[i][0];
      ans++;
    }
  }
  cout << ans;
}
