class Solution {
public:
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
if(nums1.size() == 0 && nums2.size() == 0)
return;
if(nums1.size() == 0)
return;
if(nums2.size() == 0)
return;
for(int i=m, j=0; i < nums1.size(), j < nums2.size() ; i++,j++)
{
nums1[i] = nums2[j];
}
sort(nums1.begin(), nums1.end());
return;
}
};