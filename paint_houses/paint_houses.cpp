#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

int minCostII(vector<vector<int>> &costs) {
  vector<vector<int>> min_costs;
  min_costs.push_back(costs[0]);

  for (int i = 1; i < costs.size(); ++i) {
    vector<int> c;
    c.push_back(min(min_costs[i - 1][1], min_costs[i - 1][2]));
    c.push_back(min(min_costs[i - 1][0], min_costs[i - 1][2]));
    c.push_back(min(min_costs[i - 1][0], min_costs[i - 1][1]));
  }
  return *min_element(min_costs.cbegin()->begin(), min_costs.cend()->end());
}

