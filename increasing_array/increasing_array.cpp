#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

int main() {
    int n;
    cin >> n;

    ll prev;
    cin >> prev;
    ll moves = 0;
    ll x;
    while (cin >> x) {
        if (x < prev) moves += prev - x;
        prev = max(x, prev);
    }
    cout << moves << "\n";
}

