class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int, int> m;
        vector<int> ans;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < nums[i].size(); j++){
                m[nums[i][j]]++;
            }
        }
        
        for(auto i : m){
            if(i.second == n){
                ans.push_back(i.first);
            }
        }
        sort(ans.begin(), ans.end());
        
        return ans;
        
    }
};