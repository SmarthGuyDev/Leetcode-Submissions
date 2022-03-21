class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char, int> mp;
        int n = s.length();
        for(int i = 0; i < n; i++){
            char c = s[i];
            mp[c] = i;
        }
        
        vector<int> ans; 
        int prev = -1, end = 0;
        
        for(int i = 0; i < n; i++){
            end = max(end, mp[s[i]]);
            
            if(end == i){
                ans.push_back(end - prev);
                prev = end;
            }
        }
        
        return ans;

    }
};