class Solution {
public:
    
    vector<vector<int>> res; //Or we could have made this inside main function to and passed as reference to the helper function.
    
    void helper(vector<int> &subsetArray, int i, vector<int> &nums){
        
        if(i == nums.size()){
            res.push_back(subsetArray);
            return;
        }
        
        helper(subsetArray, i + 1, nums);
        
        subsetArray.push_back(nums[i]);
        
        helper(subsetArray, i + 1, nums);
        subsetArray.pop_back();       //This is to be done because while backtracking we have to revert the changes that we did.
    }
    
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
         
         vector<int> ans;
         helper(ans, 0, nums);
         return res;
    }
};
