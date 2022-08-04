class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> right(n, 1);
        vector<int> res(n, 1);
        for(int i = n - 1; i >= 0; i--){
            if(i == n - 1){
                continue;
            }
            
            right[i] = right[i + 1] * nums[i + 1]; 
        }
        
        int leftProd = 1;
        for(int i = 0; i < n; i++){
            res[i] = leftProd * right[i];
            leftProd *= nums[i];
        }
        return res;
    }
};