class Solution {
public:
int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
sort(hc.begin(), hc.end());
sort(vc.begin(), vc.end());
int n = hc.size();
int m = vc.size();
int maxArea = 0;
for(int i = 0; i < m; i++){
for(int j = 0; j < n - 1; j++){
int l = hc[i + 1] - hc[i];
int b = vc[i];
int area = l * b;
maxArea = max(maxArea, area);
}
}
return maxArea;
}
};