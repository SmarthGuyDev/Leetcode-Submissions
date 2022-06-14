class Solution {
public:
    vector<vector<int>> dp;
    int minDistance(string word1, string word2) {
        dp.resize(size(word1) + 1, vector<int>(size(word2) + 1, 1000));
        int ans = help(word1, word2, 0, 0);
        return ans;
    }
    
    int help(string &word1, string &word2, int i, int j){
       
        if(i == size(word1) && j == size(word2)){
            return 0;
        }
        if(i == size(word1) || j == size(word2)){
            return max(size(word1) - i, size(word2) - j);
        }
        if(dp[i][j] != 1000){
            return dp[i][j];
        }
        
        if(word1[i] == word2[j]){
            return help(word1, word2, i + 1, j + 1);
        }        
        int res = dp[i][j] = 1 + min(help(word1, word2, i + 1, j), help(word1, word2, i, j + 1));
        return res;
    }
};