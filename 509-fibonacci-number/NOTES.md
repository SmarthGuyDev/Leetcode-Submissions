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
​
class Solution {
public:
//*TABULATION*//
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