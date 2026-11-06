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
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        sort(all(logs), [](const auto& a, const auto& b) {
            return a[1] < b[1];
        });

        int m = sz(queries);
        vector<pair<int, int>> q(m);
        for (int i = 0; i < m; ++i) q[i] = {queries[i], i};
        sort(all(q));

        vector<int> res(m), cnt(n + 1, 0);
        int l = 0, r = 0, act = 0, k = sz(logs);

        for (auto& [t, id] : q) {
            while (r < k && logs[r][1] <= t) {
                if (++cnt[logs[r][0]] == 1) ++act;
                ++r;
            }
            while (l < k && logs[l][1] < t - x) {
                if (--cnt[logs[l][0]] == 0) --act;
                ++l;
            }
            res[id] = n - act;
        }

        return res;
    }
};