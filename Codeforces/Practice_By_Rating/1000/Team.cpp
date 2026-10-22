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
    int n;cin>>n;
    int f[n+1][4];
    int res0=0;
    for(int i=1;i<=n;i++)
    {
        int count =0;
        for(int j=1;j<=3;j++)
        {
            cin>>f[i][j];
            if (f[i][j]==1) count++;
        }
        if (count>=2) res0++;
    }
    cout<<res0<<el;


}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}