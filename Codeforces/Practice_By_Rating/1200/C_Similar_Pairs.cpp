#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int cnt_even = 0, cnt_odd = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) cnt_even++;
        else cnt_odd++;
    }
    if (cnt_even % 2 == 0 && cnt_odd % 2 == 0) {
        cout << "YES" << endl;
        return;
    }
    sort(a.begin(), a.end());
    bool found_pair = false;
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] - a[i] == 1) {
            found_pair = true;
            break;
        }
    }

    if (found_pair) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}