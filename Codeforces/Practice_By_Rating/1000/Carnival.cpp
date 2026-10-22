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
    int l,a,b,i=0,res=0; cin>>l>>a>>b;
    for(int i=0;i<l;i++)
    {
        res=max(res,(a+b*i)%l);
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