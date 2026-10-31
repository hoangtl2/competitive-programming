#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, b=0, ans=0;
    string s;
    cin >> n >> s;
    for(char c:s) {
        if(c=='(') b++;
        else {
            b--;
            if(b < 0) {
                ans++;
                b = 0;
            }
        }
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
}