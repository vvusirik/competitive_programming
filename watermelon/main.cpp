#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int w;
  cin >> w;

  if (w % 2 == 0 && w > 2)
    cout << "YES";
  else
    cout << "NO";
}
