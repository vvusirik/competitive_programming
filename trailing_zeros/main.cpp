#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  llu inp;
  cin >> inp;

  llu zeros = 0;
  for (llu i = 1; i < 15; ++i) {
    zeros += (llu)(inp / pow(5.0, i));
  }
  cout << zeros << "\n";
}
