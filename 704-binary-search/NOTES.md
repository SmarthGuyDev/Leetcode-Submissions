Standard BS
```
class Solution {
public:
int search(vector<int>& nums, int target) {
int lo = 0;
int hi = nums.size() - 1;
while(lo < hi){
int mid = lo + (hi - lo)/2;
if(nums[mid] < target){
lo = mid + 1;
} else {
hi = mid;
}
}
// if(nums[lo] == target){
//     return lo;
// } else {
//     return -1;
// }
return nums[lo] == target ? lo : -1;
}
};
```
​
```
class Solution {
public:
int search(vector<int>& nums, int target) {
int lo = 0, hi = nums.size() - 1;
while(lo <= hi){
int mid = lo + (hi - lo)/2;
if(nums[mid] == target){
return mid;
} else if(nums[mid] < target){
lo = mid + 1;
} else {
hi = mid - 1;
}
}
return -1;
}
};
```