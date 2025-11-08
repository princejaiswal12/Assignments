class Solution {
public:
    void helper(vector<int>& nums,vector<vector<int>>& v,int i){
        if(i==nums.size()){
            v.push_back(nums);
            return;
        }
        unordered_set<int> s;
        for(int idx = i; idx < nums.size();idx++){
            if(s.find(nums[idx])!=s.end()) continue; 
            s.insert(nums[idx]);
            swap(nums[i],nums[idx]);
            helper(nums,v,i+1);
            swap(nums[i],nums[idx]);
        } 
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> v;
        helper(nums,v,0);
        return v;
    }
};