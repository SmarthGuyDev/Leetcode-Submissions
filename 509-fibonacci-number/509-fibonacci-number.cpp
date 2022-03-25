class Solution {
public:
    //*TABULATION*//
    int helper(int n, vector<int> &dp){
        int prev2 = 0;
        int prev = 1;
        
        for(int i = 2; i <= n; i++){
            int curi = prev + prev2;
            prev2 = prev;
            prev = curi;
        }
        
        if(n == 0){
            return prev2;
        }
        return prev;
    }
    
    
    
    int fib(int n) {
        vector<int> dp(n + 1, -1);
        int ans = helper(n, dp);
        return ans;
    }
};