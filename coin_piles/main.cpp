#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int t;
    cin>>t;
    int l, r;
    for (int i = 0; i < t; ++i) {
        cin>>l>>r;
        if ((l + r) % 3 != 0 || max(l, r) > min(l, r) * 2) cout << "NO\n";
        else cout << "YES\n";
    }
}
