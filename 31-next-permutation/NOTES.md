for(k=len-2;k>=0;k--){
if(nums[k]<nums[k+1])
break;
}
if(k<0){
reverse(nums.begin(),nums.end());
}
else{
for(l=len-1;l>k;l--){
if(nums[l]>nums[k])
break;
}
swap(nums[k],nums[l]);
reverse(nums.begin()+k+1,nums.end());
}
}
};
​
​
​
class Solution {
public:
void nextPermutation(vector<int>& nums) {
// support variables
int i = nums.size() - 2, j = i + 2;
while (i >= 0 && nums[i] >= nums[i + 1]) i--;
// edge case: already the highest permutation you can get
if (i == -1) {
reverse(begin(nums), end(nums));
return;
}
// finding the first element > nums[i]
while (nums[--j] <= nums[i]);
// swapping i and j's values
swap(nums[i], nums[j]);
// ordering the rest
sort(begin(nums) + i + 1, end(nums));
}
};