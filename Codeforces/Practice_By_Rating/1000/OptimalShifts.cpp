#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int f= -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            f = i;
            break;
        }
    }
    int max_gap = 0;
    int current_gap = 0;
    for (int i = 1; i <= n; i++) {
        int idx = (f + i) % n;
        if (s[idx] == '0') {
            current_gap++;
        } else {
            max_gap = max(max_gap, current_gap);
            current_gap = 0;
        }
    }
    cout << max_gap << el;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}