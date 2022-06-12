class Solution {
public:
    string removeDuplicates(string s) {
        string temp = "";
        int n = s.length();
       
        for(int i = 0; i < n; i++){
            if(temp.length() == 0)
            temp.push_back(s[i]);
            
            else if(s[i] == temp[temp.length() - 1]){
                temp.pop_back();
            } else {
                temp.push_back(s[i]);
            }
        }
        return temp;    
    }
};