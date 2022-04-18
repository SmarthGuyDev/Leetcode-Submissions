class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        int ans = 0;
        int num1 = 0, num2 = 0;
        
        for(auto s : ops){
            if(s == "C"){
                st.pop();
            } else if(s == "D"){
                st.push(2 * st.top());
            } else if(s == "+"){
                num1 = st.top();
                st.pop();
                num2 = st.top();
                st.push(num1);
                st.push(num1 + num2);
            } else {
                st.push(stoi(s));
            }
        }
        
        while(st.size() != 0){
            ans += st.top();
            st.pop();
        }
        
        return ans;
    }
};