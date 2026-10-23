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

class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int ans = -1;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (i != nums[i]) {
                ans &= nums[i];
            }
        }
        
        return max(ans, 0);
    }
};