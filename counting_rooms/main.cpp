#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

int n, m;
int h[] = {-1, 1, 0, 0};
int v[] = {0, 0, -1, 1};

void bfs(vector<vector<char>> &grid, int i, int j) {
  queue<pair<int, int>> q;
  q.emplace(i, j);
  pair<int, int> p;
  while (q.size() > 0) {
    const auto &[i, j] = q.front();
    q.pop();
    grid[i][j] = 'x';

    if (i - 1 >= 0 && grid[i - 1][j] == '.')
      q.emplace(i - 1, j);

    if (i + 1 < grid.size() && grid[i + 1][j] == '.')
      q.emplace(i + 1, j);

    if (j - 1 >= 0 && grid[i][j - 1] == '.')
      q.emplace(i, j - 1);

    if (j + 1 < grid[0].size() && grid[i][j + 1] == '.')
      q.emplace(i, j + 1);
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;
  vector<vector<char>> grid;
  grid.resize(n);
  char val;
  for (int i = 0; i < n; ++i) {
    grid[i].resize(m);
    for (int j = 0; j < m; ++j) {
      cin >> val;
      grid[i][j] = val;
    }
  }

  int rooms = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (grid[i][j] == '.') {
        cout << i << " " << j;
        bfs(grid, i, j);
        rooms++;
      }
    }
  }
  cout << rooms << "\n";
}
