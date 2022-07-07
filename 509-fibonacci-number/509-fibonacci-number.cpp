class Solution {
public:
    //*Space Optimised*//
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

/*

```
class Solution {
public:
        
    int fibHelper(int n, vector<int> &strg){
        if(n == 0 || n == 1){
            return n;
        }
        
        if(dp[n] != -1){
            return dp[n]; 
        }
        
        int fnm1 = fibHelper(n - 1, dp);
        int fnm2 = fibHelper(n - 2, dp);
        
        int fn = fnm1 + fnm2;
        
        dp[n] = fn;
        return fn;
    }
    
    
    int fib(int n) {
        vector<int> dp(n + 1, -1);
        int ans = fibHelper(n, dp);
        return ans;
    }
};
```
```

class Solution {
public:
    
    //*MEMOISATION*/
    
/*
    int helper(int n, vector<int> &dp){
    
        if(n == 0 || n == 1){
            return n;
        }
        
        if(dp[n] != -1){
            return dp[n];
        }
        
        return dp[n] = helper(n - 1, dp) + helper(n - 2, dp);
        
    } 
    
    int fib(int n) {
        vector<int> dp(n + 1, -1);
        
        int ans = helper(n, dp);
        return ans;
    }
};
```
```

class Solution {
public:
    //*TABULATION*/
/*
    int helper(int n, vector<int> &dp){
        dp[0] = 0;
        dp[1] = 1;
        
        for(int i = 2; i <= n; i++){
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        
        return dp[n];
    }
    
    
    
    int fib(int n) {
        vector<int> dp(n + 1, -1);
        int ans = helper(n, dp);
        return ans;
    }
};
```

*/