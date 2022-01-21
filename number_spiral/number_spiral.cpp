#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

int main() {
    int t;
    llu x;
    llu y;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> x >> y;
        x--;
        y--;

        llu n = max(x, y);
        llu diag = 1 + n*n + n;
        if (x == y) cout << diag << "\n";
        else if (x < y && y % 2 == 1) cout << diag - (y - x) << "\n";
        else if (x < y && y % 2 == 0) cout << diag + (y - x) << "\n";
        else if (x > y && x % 2 == 1) cout << diag + (x - y) << "\n";
        else if (x > y && x % 2 == 0) cout << diag - (x - y) << "\n";
    }
}
