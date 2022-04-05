class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0;
        
        int left = 0;
        int right = height.size() - 1;
        
        while(left <= right){
            res = max(min(height[left], height[right]) * (right - left), res);
            
            if(height[right] > height[left]){
                left++;
            } else {
                right--;
            }
        }
        return res;
    }
};