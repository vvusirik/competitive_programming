#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

int main() {
  int n;
  cin >> n;

  if (n == 3 || n == 2) {
    cout << "NO SOLUTION"
         << "\n";
    return 0;
  }
  for (int i = 2; i <= n; i += 2)
    cout << i << " ";
  for (int i = 1; i <= n; i += 2)
    cout << i << " ";
  cout << "\n";
  cin
}

