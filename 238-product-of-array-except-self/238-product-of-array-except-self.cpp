class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> first(n, 1);
        vector<int> sec(n, 1);
        vector<int> res; 
        
        for(int i = 0; i < n; i++){
            if(i == 0){
                continue;
            }
            first[i] = nums[i - 1] * first[i - 1]; 
        }
        
        for(int i = n - 1; i >= 0; i--){
            if(i == n - 1){
                continue;
            }
            sec[i] = nums[i + 1] * sec[i + 1]; 
        }
        
        for(int i = 0; i < n; i++){
            int temp = first[i] * sec[i];
            res.push_back(temp);
        }
        
        return res;
        
    }
};