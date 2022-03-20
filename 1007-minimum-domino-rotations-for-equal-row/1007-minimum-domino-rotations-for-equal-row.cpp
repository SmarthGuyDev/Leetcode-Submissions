class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        vector<int> t(7), b(7), same(7);
                           
        int n = tops.size();                                
        for(int i = 0; i < n; i++){
            int av = tops[i];
            int bv = bottoms[i];
            
            t[av] += 1;
            b[bv] += 1;
            
            if(av == bv){
                same[av] += 1;
            } 
        }
        int ans = n;
        for(int i = 1; i <= 6; i++){
            if(t[i] + b[i] - same[i] == n){
            int minSwap = min(t[i], b[i]) - same[i];
                ans = min(ans, minSwap);
            }
        }
                                        
        return ans == n ? -1 : ans;
    }
};