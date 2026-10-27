#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ull unsigned long long
#define ush unsigned short
#define el '\n'

void solve() 
{
    int n; 
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> tails;
    for (int i = 0; i < n; i++) {
        int val = -a[i]; 
        auto it = upper_bound(tails.begin(), tails.end(), val);
        
        if (it == tails.end()) {
            tails.push_back(val);
        } else {
            *it = val;
        }
    }
    cout << tails.size() << el;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
