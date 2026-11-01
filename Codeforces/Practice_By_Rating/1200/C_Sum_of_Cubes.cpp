#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'

unordered_set<ll> cubes;

void precompute() {
    for (ll i = 1; i <= 10000; i++) {
        cubes.insert(i * i * i);
    }
}

void solve() {
    ll n;
    cin >> n;
    for (ll i = 1; i * i * i < n; i++) {
        if (cubes.count(n - i * i * i)) {
            cout << "YES" << el;
            return;
        }
    }
    cout << "NO" << el;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    precompute();
    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}