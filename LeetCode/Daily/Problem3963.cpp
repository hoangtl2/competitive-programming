class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> a(m);
        a[0] = string(n, '.'); 
        for(int i = 1; i < m; i++) {
            a[i] = string(n - 1, '#') + ".";
        }
        return a;
    }
};
