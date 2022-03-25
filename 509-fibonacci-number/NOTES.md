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