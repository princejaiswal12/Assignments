class Solution {
public:
    unordered_set<string> te;
    void helper(string &s,int i,vector<string>& v){
        if(i==s.size()){
            if(te.find(s)!=te.end()){
                return;
            }
            te.insert(s);
            v.push_back(s);
            return;
        }
        for(int idx =i;idx<s.size();idx++){
            swap(s[i],s[idx]);
            helper(s,i+1,v);
            swap(s[i],s[idx]);
        }
    }
    unordered_set<string> se;
    void helper1(string& s,int i,vector<string>& v,string ans){
        if(i==s.size()){
            if(se.find(ans)==se.end()){
                v.push_back(ans);
                se.insert(ans);
            }
            return;
        }
        helper1(s,i+1,v,ans+s[i]);
        helper1(s,i+1,v,ans);
    }
    int numTilePossibilities(string tiles) {
        vector<string> v;
        helper1(tiles,0,v,"");
        vector<string> ans;
        for(int i=0;i<v.size();i++){
            helper(v[i],0,ans);
        }
        return ans.size()-1;
    }
};