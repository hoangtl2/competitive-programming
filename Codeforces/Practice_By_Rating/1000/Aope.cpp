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
    int n,res=0;
    cin>>n;
    vector<int> a(n+1);
    vector<bool> flag(n+1);

    for (int i=1;i<=n;i++) cin>>a[i];
    for (int i=1;i<=n;i++)
    {
        if(flag[i]) continue;
        for (int j=i+1;j<=n;j++)
        {
            if(flag[j]) continue;
            if (a[i]>a[j])
            {
                res++;
                flag[j]=true;
            }

        }
    }
    cout<<res<<el;
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