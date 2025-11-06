class Solution {
  public:
    void helper(int n, int ones, int zeros, string ans, vector<string>& v) {
        if (ans.size() == n) { 
            v.push_back(ans);
            return;
        }
        helper(n, ones + 1, zeros, ans + '1', v);

        if (ones > zeros) {
            helper(n, ones, zeros + 1, ans + '0', v);
        }
    }

    vector<string> NBitBinary(int n) {
        vector<string> v;
        helper(n, 0, 0, "", v);
        return v;
    }
};
