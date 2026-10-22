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
    cin>>n;
    string res="",s="";
    cin>>res;
    for (int i=1;i<n;i++)
    {
        cin>>s;
        if(res+s<=s+res) res+=s;
        else res=s+res;
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