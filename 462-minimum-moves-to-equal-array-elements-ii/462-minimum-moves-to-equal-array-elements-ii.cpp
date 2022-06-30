class Solution {
public:
    int minMoves2(vector<int>& nums) {
           sort(nums.begin(), nums.end());
        
           int mid = nums[nums.size()/2];
        
        int ans = 0;
        
        for(auto itr : nums){
            ans += abs(mid - itr);
        }
        return ans;
    }
};