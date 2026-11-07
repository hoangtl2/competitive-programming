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
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {
        int n = sz(servers), m = sz(tasks);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> f;
        priority_queue<tuple<ll, int, int>, vector<tuple<ll, int, int>>, greater<>> b;

        for (int i = 0; i < n; ++i) {
            f.emplace(servers[i], i);
        }

        vector<int> ans(m);
        ll t = 0;

        for (int j = 0; j < m; ++j) {
            t = max(t, (ll)j);
            if (f.empty() && !b.empty()) {
                t = max(t, get<0>(b.top()));
            }
            while (!b.empty() && get<0>(b.top()) <= t) {
                auto [_, w, i] = b.top();
                b.pop();
                f.emplace(w, i);
            }
            auto [w, i] = f.top();
            f.pop();
            ans[j] = i;
            b.emplace(t + tasks[j], w, i);
        }

        return ans;
    }
};