#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string s;
    cin>>s;
    if(s.length()<=10)
    {
        cout<<s<<endl;
        return;
    }
    cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
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