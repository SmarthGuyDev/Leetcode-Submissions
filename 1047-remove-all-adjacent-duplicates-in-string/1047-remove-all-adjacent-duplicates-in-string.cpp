class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        
        for(auto itr : s){
            if(st.size() == 0){
                st.push(itr);
            } else if(st.top() == itr){
                st.pop();
            } else {
                st.push(itr);
            }
        }
        string res = "";
        stack<char> temp;
        while(!st.empty()){
            temp.push(st.top());
            st.pop();
        }
        
        while(!temp.empty()){
            res.push_back(temp.top());
            temp.pop();
        }
        
        return res;
    }
};