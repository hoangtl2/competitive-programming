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
    vector<int> findSubtreeSizes(vector<int>& parent, string s) {
        int n = sz(parent);
        vector<vector<int>> adj(n);
        for (int i = 1; i < n; ++i) {
            adj[parent[i]].push_back(i);
        }

        vector<int> new_parent = parent;
        vector<int> last_seen(26, -1);

        auto dfs1 = [&](auto& self, int u) -> void {
            int c = s[u] - 'a';
            int prev_node = last_seen[c];
            
            if (prev_node != -1) {
                new_parent[u] = prev_node;
            }
            
            last_seen[c] = u;
            for (int v : adj[u]) {
                self(self, v);
            }
            last_seen[c] = prev_node;
        };

        dfs1(dfs1, 0);

        vector<vector<int>> new_adj(n);
        for (int i = 1; i < n; ++i) {
            new_adj[new_parent[i]].push_back(i);
        }

        vector<int> ans(n, 1);
        auto dfs2 = [&](auto& self, int u) -> void {
            for (int v : new_adj[u]) {
                self(self, v);
                ans[u] += ans[v];
            }
        };

        dfs2(dfs2, 0);
        return ans;
    }
};