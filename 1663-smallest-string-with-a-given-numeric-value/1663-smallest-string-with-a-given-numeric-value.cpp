class Solution {
public:
    string getSmallestString(int n, int k) {
        
        string res(n, 'a');
        k -= n;
        
        while(n > 0){
            res[n - 1] += min(k, 25);
            k -= min(25, k);
            n--;
        }
        return res;
    }
};