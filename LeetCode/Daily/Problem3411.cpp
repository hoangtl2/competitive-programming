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
    int maxLength(vector<int>& nums) {
        int n = sz(nums);
        int ans = 2;
        for (int i = 0; i < n; ++i) {
            ll prod = nums[i];
            ll g = nums[i];
            ll l = nums[i];

            for (int j = i + 1; j < n; ++j) {
                if (prod > 25200) break;

                prod *= nums[j];
                g = std::gcd(g, (ll)nums[j]);
                l = std::lcm(l, (ll)nums[j]);

                if (prod == l * g) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};