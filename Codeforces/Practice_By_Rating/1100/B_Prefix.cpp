#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ull unsigned long long
#define ush unsigned short
#define el '\n'
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    ll mn = a[0], mx = a[0], ans = a[0];
    for (int i = 1; i < n; ++i) {
        ll cur = max({a[i], a[i] - mn, a[i] + mx});
        ans = max(ans, cur);

        ll nmn = min({a[i], mn + a[i], 2 * mn + a[i]});
        ll nmx = max({a[i], mx + a[i], 2 * mx + a[i]});
        mn = nmn;
        mx = nmx;
    }
    cout << ans << el;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}