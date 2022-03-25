class Solution {
public:
    int helper(int n, vector<int> &dp){
        if(n == 0){
            return 1;
        } else if(n < 0){
            return 0;
        }
        
        if(dp[n] != -1){
            return dp[n];
        }
        
        return dp[n] = helper(n - 1, dp) + helper(n - 2, dp);
        
    }
    
    
    
    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);
        
        int ans = helper(n, dp);
        return ans;
    }
};