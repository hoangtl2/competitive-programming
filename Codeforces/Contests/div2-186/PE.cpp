#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ull unsigned long long
#define ush unsigned short
#define el '\n'
struct fr 
{
    int id;
    int x; 
    ll c; 
    bool flag; // Đánh dấu đã có quà chưa
};
bool cmp(int a, int b) 
{
    return a > b;
}
void solve() 
{
    int n,m;
    long long k;
    cin>>n>>m>>k;
    vector<int> a(m);
    for (int i=0;i<m;++i) cin>>a[i];
    sort(a.begin(),a.end(),cmp);
    
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