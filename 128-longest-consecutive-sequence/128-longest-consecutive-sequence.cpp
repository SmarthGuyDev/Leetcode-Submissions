class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0, count = 1, mx = 0;
        
        if(n == 0){
            return 0;
        }
        
        for(int i = 0; i < n - 1; i++){
            if(nums[i + 1] - nums[i] == 1){
                count++;
            } else if(nums[i + 1] != nums[i]) {
                mx = max(count, mx);
                count = 1;
            }
        }
        mx = max(count, mx);
        return mx;
    }
};