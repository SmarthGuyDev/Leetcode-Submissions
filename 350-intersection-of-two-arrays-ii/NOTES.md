int n = nums1.size();
int m = nums2.size();
vector<int> res;
sort(nums1.begin(), nums1.end());
sort(nums2.begin(), nums2.end());
int i = 0, j=0;
while(i < n && j < m)
{
if(nums1[i] < nums2[j])
i++;
else if(nums1[i] > nums2[j])
j++;
else
{
res.push_back(nums1[i]);
i++;
j++;
}
}
return res;
}
class Solution {
public:
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//using unorderd_map to store  and frequency of one vector
unordered_map<int,int>m;
vector<int>out;
for(auto val:nums1)
{
m[val]++;
}
//if val from 2nd vector is present in map then
//put it in output vector
//also decrease the count
for(auto val:nums2)
{
if(m[val]>0)
{
out.push_back(val);
m[val]--;
}
}
return out;
}
};