class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0; 
        int n = nums.size();
        
        int hi = n - 1;
        
        while(low <= hi){
            int mid = low + (hi - low)/2;
            
            if(nums[mid] == target){
                return mid;
            } else if(target > nums[mid]){
                low = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return -1;
    }
};