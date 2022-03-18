class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          unordered_map<int, int>hash;
        int s=nums.size();
        for(int i=0;i<s;i++)
        {
           if(hash.find(target-nums[i])!=hash.end())
           {
               return {i,hash[target-nums[i]]};
           }
            else
                hash[nums[i]]=i;
        }
        return {};
    }
};