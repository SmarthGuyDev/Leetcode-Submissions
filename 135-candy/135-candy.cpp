class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
  vector<int>l(n, 1);
  vector<int> r(n, 1);
for(int i = 0 ; i< n-1 ; i++)
{
  if(ratings[i]< ratings[i+1])
    l[i+1] = l[i]+1;
  
}
for(int i = n-1 ; i>0 ; i--)
{
  if(ratings[i-1]>ratings[i])
    r[i-1] = r[i]+1;
}
vector<int>ans(n);
for(int i = 0 ; i< n ; i++)
ans[i] = max(l[i] , r[i]);
int count =0;
for(int i = 0 ; i< n ; i++)
count += ans[i];
return count;
    }
};