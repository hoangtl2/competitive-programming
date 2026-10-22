#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ull unsigned long long
#define ush unsigned short
#define el '\n'
ll cv(ush n, ush l[],  ush u[]) 
{
    ui count= 0;
    for (ush i=1;i<=n;i++) 
    {
        bool flag = true;
        for (int j = 1; j <= n; ++j) 
        {
            if (l[j] >= u[(j + i - 2) % n+1]) 
            {
                flag = false;
                break;
            }
        }
        if (flag) count++;
    }
    return count;
}
void solve() 
{
    ush n;
    cin>>n;
    ush a[n+1],b[n+1],c[n+1];
    for (ush i=1;i<=n;i++) cin>>a[i];
    for (ush i=1;i<=n;i++) cin>>b[i];
    for (ush i=1;i<=n;i++) cin>>c[i];
    ll res = 1LL*cv(n,a,b)*cv(n,b,c)*n;
    cout<<res<<el;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ush t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}