#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  llu n;
  cin >> n;

  llu sum = n * (n + 1) / 2;
  unordered_set<llu> res1;
  unordered_set<llu> res2;
  if (sum % 2 == 1) {
    cout << "NO\n";
    return 0;
  }

  llu half = sum / 2;
  int j;
  if (half % n == 0) {
    res1.insert(n);
    for (llu i = 1; i <= (half - n) / n; ++i) {
      res1.insert(i);
      res1.insert(n - i);
    }

    for (llu i = 1; i <= n; ++i)
      if (res1.find(i) == res1.end())
        res2.insert(i);

  } else {
    for (llu i = 1; i <= half / (n + 1); ++i) {
      res1.insert(i);
      res1.insert(n - i + 1);
    }

    for (llu i = 1; i <= n; ++i)
      if (res1.find(i) == res1.end())
        res2.insert(i);
  }

  cout << "YES\n";
  cout << res1.size() << "\n";
  for (auto elem : res1) {
    cout << elem << " ";
  }
  cout << "\n";

  cout << res2.size() << "\n";
  for (auto elem : res2) {
    cout << elem << " ";
  }
  cout << "\n";
}
