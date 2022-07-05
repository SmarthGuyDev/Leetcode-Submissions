class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0, count = 1, mx = 0;
        
        if(n == 0){
            return 0;
        }
        
        for(int i = 1; i < n; i++){
            if(nums[i] == nums[i - 1] + 1){
                count++;
            } else if(nums[i] != nums[i - 1]) {
                mx = max(count, mx);
                count = 1;
            }
        }
        mx = max(count, mx);
        return mx;
    }
};