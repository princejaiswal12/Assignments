class Solution {
public:
    void comb(int n, int k, vector<vector<int>>& v, vector<int> ans, int start) {
        if (ans.size() == k) {
            v.push_back(ans);
            return;
        }

        for (int j = start; j <= n; j++) {
            ans.push_back(j);
            comb(n, k, v, ans, j + 1); // move to next number
            ans.pop_back(); // backtrack
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> v;
        vector<int> ans;
        comb(n, k, v, ans, 1);
        return v;
    }
};
