#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  char c;
  unordered_map<char, int> counts;
  int len = 0;
  while (cin >> c) {
    len++;
    if (counts.find(c) == counts.end())
      counts[c] = 1;
    else
      counts[c] = counts.at(c) + 1;
  }

  int odds = 0;
  for (auto [k, v] : counts) {
    if (v % 2 == 1)
      odds++;
    if (odds > 1) {
      cout << "NO SOLUTION"
           << "\n";
      return 0;
    }
  }

  char pal[len];
  int idx = 0;
  for (auto [k, v] : counts) {
    int v_cnt = v;
    while (v_cnt > 0) {
      if (v_cnt % 2 == 1) {
        pal[len / 2] = k;
        v_cnt--;
      } else {
        pal[idx] = k;
        pal[len - idx - 1] = k;
        v_cnt -= 2;
        idx += 1;
      }
    }
  }

  for (auto c : pal)
    cout << c;
  cout << "\n";
}
