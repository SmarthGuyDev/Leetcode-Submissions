​
class Solution {
public:
int lengthOfLongestSubstring(string s) {
vector<int> mpp(256,-1);  // frequency array of size 256 as strings can be max 256
int left = 0, right = 0;
int len = 0;
int n = s.size();
while(right < n)
{
if(mpp[s[right]] != -1)
left = max(mpp[s[right]]+1, left);  //sets new left with jumping instead of just left++
mpp[s[right]] = right; // sets new index
len = max((right - left + 1), len);
right++;
}
return len;
}
//T = O(n)
//S = O(1) as fixed size of frequency array of 256 which is constant
};
​