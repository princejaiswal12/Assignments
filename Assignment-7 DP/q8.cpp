class Solution {
public:
    int helper(vector<vector<int>>& grid,int i,int j, vector<vector<int>>& dp){
        if(i==0 && j==0) return grid[0][0];
        if(i<0 || j<0) return INT_MAX;
        if(dp[i][j]!=-1) return dp[i][j];
        int b =  helper(grid,i-1,j,dp);
        int a =  helper(grid,i,j-1,dp);  
        return dp[i][j] = grid[i][j] + min(a,b); 
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m,vector<int> (n,-1));
        return helper(grid,m-1,n-1,dp);
    }
};