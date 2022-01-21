#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

int main() {
    char x;
    cin >> x;
    char last = x;
    ll reps = 1;
    ll max_reps = 1;
    while (cin >> x) {
        if (x == last) {
            reps++;
            max_reps = max(reps, max_reps);
        } 
        else reps = 1;
        last = x;
    }
    cout << max_reps << "\n";
}
