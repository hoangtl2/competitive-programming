#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ull unsigned long long
#define el '\n'

void solve() 
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool h26 = (s.find("2026") != string::npos);
    bool h25 = (s.find("2025") != string::npos);
    if (h26 || !h25) {
        cout <<0<<el;
    } else {
        cout <<1<<el;
    }
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}