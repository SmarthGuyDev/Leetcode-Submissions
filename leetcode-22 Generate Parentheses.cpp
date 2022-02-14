class Solution {
public:

    vector<string> res;
    void helper(string &s, int open, int close){
        if(open == 0 && close == 0){
            res.push_back(s);
            return;
        }
        
        if(open > 0){
            s.push_back('(');
            helper(s, open - 1, close);
            s.pop_back();
        } 
        
        if(close > 0){
            if(open < close){     //here we do (open < close) because if open < close here, that means                                    in the string the number of '(' is more than ')'
                s.push_back(')');
                helper(s, open, close - 1);
                s.pop_back();
            }
        }
        
    }
    
    vector<string> generateParenthesis(int n) {
      string s;
      helper(s, n, n);
        return res;
    }
};
