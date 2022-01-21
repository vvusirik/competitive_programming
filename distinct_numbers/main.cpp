#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  set<int> distinct;
  int x;
  for (int i = 0; i < n; ++i) {
    cin >> x;
    if (distinct.find(x) != distinct.end()) continue;
    distinct.insert(x);
  }
  cout << distinct.size() << "\n";
}
