#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    ll total = (n * (n + 1)) / 2;
    ll sum = 0;
    ll x = 0;
    while (cin >> x) sum += x;
    cout << total - sum << "\n";
}
