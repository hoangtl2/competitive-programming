#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ull unsigned long long
#define ush unsigned short
#define el '\n'
ui tinh_tong(int n, int u1) {
    if (n == 0) return 0;
    ui s = 1LL << (2 * n);
    return u1 * (s - 1) / 3;
}
void solve() 
{
    int a,b;
    cin>>a>>b;
    int res = 0;
    for (int L = 1; ; L++) {
        int sl = (L + 1) / 2;
        int sc = L / 2;
        ui ple = tinh_tong(sl, 1);  
        ui pchan = tinh_tong(sc, 2); 
        bool th1 = (a >= ple && b >= pchan);
        bool th2 = (b >= ple && a >= pchan);
        if (th1 || th2) {
            res = L;
        } else {
            break;
        }
    }
    
    cout << res<< el;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}