#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

int n, m;
int h[] = {-1, 1, 0, 0};
int v[] = {0, 0, -1, 1};
char grid[1001][1001];

bool valid(int x, int y) {
  if (x < 0 || x >= n || y < 0 || y >= m)
    return false;
  return true;
}

void dfs(int i, int j) {
  grid[i][j] = 'o';
  for (int d = 0; d < 4; ++d) {
    int dx = i + h[d];
    int dy = j + v[d];
    if (valid(dx, dy) && grid[dx][dy] == '.')
      dfs(dx, dy);
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> grid[i][j];
    }
  }

  int rooms = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (grid[i][j] == '.') {
        dfs(i, j);
        rooms++;
      }
    }
  }
  cout << rooms << "\n";
}
