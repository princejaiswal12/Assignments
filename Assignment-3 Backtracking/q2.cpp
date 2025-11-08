class Solution {
public:
    vector<vector<string>> result;

    bool isPalindrome(const string &s) {
        int l = 0, r = s.size() - 1;
        while (l < r) {
            if (s[l++] != s[r--]) return false;
        }
        return true;
    }

    void helper(string &s, int i, vector<string> &path) {
        if (i == s.size()) {
            result.push_back(path);
            return;
        }

        string curr = "";

        for (int j = i; j < s.size(); j++) {
            curr += s[j];

            if (isPalindrome(curr)) { 
                path.push_back(curr);
                helper(s, j + 1, path);
                path.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<string> path;
        helper(s, 0, path);
        return result;
    }
};
