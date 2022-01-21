#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

int n, a, b;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  // start of interval adds 1 to curr customer count
  // end of interval subtracts 1 to curr customer count
  set<pair<int, int>> events;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> a >> b;
    events.insert({a, 1});
    events.insert({b, -1});
  }
  int max_cust = 0;
  int cust = 0;
  for (auto [t, e] : events) {
    cust += e;
    max_cust = max(cust, max_cust);
  }
  cout << max_cust << "\n";
}
