New approach
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
set<int> st(nums1.begin(), nums1.end());
vector<int> res;
for(int itr = 0; itr < nums2.size(); itr++){
if(st.find(nums2[itr]) != st.end()){
res.emplace_back(nums2[itr]);
st.erase(nums2[itr]);
}
}
return res;
}
class Solution {
public:
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
set<int> s;
for(int i = 0 ; i < nums1.size() ; i++)
{
for(int j = 0 ; j < nums2.size() ; j++ )
{
if(nums1[i] == nums2[j])
{
s.insert(nums1[i]);
break;
}
}
}
vector<int> v;
for(auto itr = s.begin() ; itr != s.end() ; itr++ )
v.push_back(*itr);
return v;
}
};