class Solution {
public:
    int f(vector<int>& nums,int i,vector<int>& dp,int n){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        int take = nums[i] + f(nums,i+2,dp,n);
        int skip = f(nums,i+1,dp,n);
        return dp[i] = max(take,skip);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        if(n==2){
            return max(nums[0],nums[1]);
        }
        vector<int> dp(n,-1);
        int a = f(nums,0,dp,n-1);
        dp.assign(n,-1);
        int b = f(nums,1,dp,n);
        return max(a,b);
    }
};