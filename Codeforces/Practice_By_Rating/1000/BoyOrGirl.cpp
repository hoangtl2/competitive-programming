#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ull unsigned long long
#define ush unsigned short
#define el '\n'

void solve() {
    string s;
    cin >> s;
    set<char> distinct_chars;
    for(char c : s) {
        distinct_chars.insert(c);
    }
    if(distinct_chars.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << el;
    } else {
        cout << "IGNORE HIM!" << el;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}