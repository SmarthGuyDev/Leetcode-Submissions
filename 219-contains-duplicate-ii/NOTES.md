TLE
​
```
class Solution {
public:
bool containsNearbyDuplicate(vector<int>& nums, int k) {
int n = nums.size();
for(int i = 0; i < n; i++){
for(int j = i; j < n; j++){
if(nums[i] == nums[j] && abs(i - j) <= k && i != j){
return true;
}
}
}
return false;
}
};
```