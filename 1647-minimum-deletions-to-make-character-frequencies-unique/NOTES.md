class Solution {
public:
int minDeletions(string s) {
unordered_set<int> set;
unordered_map<char, int> mp;
int n = s.size();
for(int i = 0; i < n; i++){
mp[s[i]]++;
}
int ans = 0;
for(auto itr : mp){
if(set.find(itr.second) == set.end()){
set.insert(itr.second);
} else {
set.insert(itr.second - 1);
ans++;
}
}
return ans;
}
};