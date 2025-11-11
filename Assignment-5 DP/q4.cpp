#include <bits\stdc++.h>
using namespace std;
long long f(vector<long long>& ans,int i,vector<long long>& dp){
    if(i>=ans.size()) return 0;
    if(dp[i]!=-1) return dp[i];
    long long take = f(ans,i+2,dp)+(long long)(i*ans[i]);
    long long skip = f(ans,i+1,dp);
    return dp[i] = max(take,skip);
}
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    int mx = -1;
    int mn = INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mx = max(mx, v[i]);
        mn = min(mn, v[i]);
    }

    vector<long long> ans(mx + 1, 0); 
    for (int i = 0; i < n; i++) {
        ans[v[i]]++; 
    }
    vector<long long> dp(mx + 1,-1);
    cout<<f(ans,mn,dp);
    return 0;
}
