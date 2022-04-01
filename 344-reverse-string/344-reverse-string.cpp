class Solution {
public:
    
    void reverseString(vector<char>& s) {
                
        char temp;
        int i=0;
        int j=s.size()-1;
        
        while(i < j)
        {
            swap(s[i++], s[j--]);
       }
        
    }
};