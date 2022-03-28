class Solution {
public:
vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
vector<vector<int>> res;
unordered_set<int> m1;
unordered_set<int> m2;
for(int i = 0; i < nums1.size(); i++){
m1.insert(nums1[i]);
}
for(int i = 0; i < nums2.size(); i++){
m2.insert(nums2[i]);
}
vector<int> v1;
vector<int> v2;
for(auto itr : m1){
for(auto it : m2){
if(m2.find(itr) == m2.end()){
v1.push_back(itr);
break;
}
}
}
for(auto itr : m2){
for(auto it : m1){
if(m1.find(itr) == m1.end()){
v2.push_back(itr);
break;
}
}
}
res.push_back(v1);
res.push_back(v2);
return res;
}
};