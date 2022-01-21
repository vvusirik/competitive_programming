#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m, k;
  cin >> n >> m >> k;

  vector<int> apartments;
  int a;
  for (int i = 0; i < n; ++i) {
    cin >> a;
    apartments.push_back(a);
  }

  vector<int> desired;
  int x;
  for (int i = 0; i < m; ++i) {
    cin >> x;
    desired.push_back(x);
  }

  sort(apartments.begin(), apartments.end());
  sort(desired.begin(), desired.end());

  int res = 0;
  size_t pa = 0;
  size_t pd = 0;

  while (pd < desired.size() && pa < apartments.size()) {
    if (apartments[pa] <= desired[pd] + k &&
        apartments[pa] >= desired[pd] - k) {
      res++;
      pa++;
      pd++;
    } else if (desired[pd] + k <= apartments[pa]) {
      pd++;
    } else {
      pa++;
    }
  }

  cout << res << "\n";
}
