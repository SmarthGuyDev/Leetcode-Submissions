class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mini = INT_MAX;
        int n = prices.size();
        int diff = 0;
        int maxi = 0;
        for(int i = 0; i < n; i++){
            
            if(prices[i] < mini)
               mini = prices[i];
            
            diff = prices[i] - mini;
            
            if(maxi < diff){
                maxi = diff;
            }
        }
        return maxi;
        
    }
};