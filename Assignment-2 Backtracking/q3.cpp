class Solution {
public:
    unordered_map<char,string> m;
    
    void helper(string digits,vector<string>& v,int idx,string ans){
        if(idx==digits.size()){
            v.push_back(ans);
            return;
        }
        for(char ch : m[digits[idx]]){
            helper(digits,v,idx+1,ans+ch);
        }
    }
    vector<string> letterCombinations(string digits) {
        m['2'] = "abc";
        m['3'] = "def";
        m['4'] = "ghi";
        m['5'] = "jkl";
        m['6'] = "mno";
        m['7'] = "pqrs";
        m['8'] = "tuv";
        m['9'] = "wxyz";
        vector<string> v;
        helper(digits,v,0,"");
        return v;
    }
};