#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;

static const auto fast_io = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

#define ll long long
#define ui unsigned int
#define ull unsigned long long
#define ush unsigned short
#define el '\n'
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

class Solution {
public:
    bool canAliceWin(int n) {
        int cur = 10;
        bool alice = true;
        while (n >= cur && cur > 0) {
            n -= cur;
            --cur;
            alice = !alice;
        }
        return !alice;
    }
};