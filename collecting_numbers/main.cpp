#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

int n;
vector<int> nums;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;

  int x;
  nums.resize(n + 1);
  for (int i = 0; i < n; ++i) {
    cin >> x;
    nums[x] = i + 1;
  }

  int rounds = 1;
  int idx = nums[1];
  for (int i = 1; i <= n; ++i) {
    if (nums[i] < idx) {
      rounds++;
    }
    idx = nums[i];
  }

  cout << rounds;
}
