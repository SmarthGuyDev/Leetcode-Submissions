class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0 || (x!=0 && x%10==0))
            return false;
    
        long long sum=0;
        
        while(x>sum){
            sum=sum*10+ x%10;
            x=x/10;
        }
        if((sum==x)||(x==sum/10))
            return true;
        else
            return false;
    }
};