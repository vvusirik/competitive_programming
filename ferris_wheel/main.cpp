#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, x;
  cin >> n >> x;
  vector<int> weights;
  int p;
  for (int i = 0; i < n; ++i) {
    cin >> p;
    weights.push_back(p);
  }
  sort(weights.begin(), weights.end());

  int l, r;
  l = 0;
  r = weights.size() - 1;

  int res = 0;
  while (l <= r) {
    if (l == r) {
      res++;
      break;
    }
    if (weights[l] + weights[r] <= x) {
      res++;
      l++;
      r--;
    } else {
      res++;
      r--;
    }
  }

  cout << res << "\n";
}
