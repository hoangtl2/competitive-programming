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
    int n,count=0,siumin=999999;cin>>n;
    vector<int> arr(n),brr(1001,0);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        siumin=min(siumin,arr[i]);
        if (brr[arr[i]]==0)
        {
            count++;
        }
        brr[arr[i]]=1;
    }
    if (count<=siumin) cout<<siumin<<el;
    else{
        while(brr[count]==0) count++;
        cout<<count<<el;
    }
    
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