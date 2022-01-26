#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

int n, q, a, b;
llu x;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> q;
  vector<llu> val;
  vector<llu> pre;
  vector<llu> suf;
  val.resize(n);
  pre.resize(n);
  suf.resize(n);
  for (int i = 0; i < n; ++i) {
    cin >> x;
    val[i] = x;
  }

  llu sum = 0;
  for (int i = 0; i < n; ++i) {
    pre[i] = sum;
    sum += val[i];
  }

  sum = 0;
  for (int i = n - 1; i >= 0; --i) {
    suf[i] = sum;
    sum += val[i];
  }

  llu total = sum;
  for (int i = 0; i < q; ++i) {
    cin >> a >> b;
    cout << total - (pre[a - 1] + suf[b - 1]) << "\n";
  }
}
