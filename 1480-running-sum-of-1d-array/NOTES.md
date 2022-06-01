class Solution {
public:
vector<int> runningSum(vector<int>& nums) {
int currentSum=0;
vector<int> result;
for (int i = 0; i < nums.size(); i++)
{
currentSum += nums[i];
result.push_back(currentSum);
}
return result;
}
};