class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        stack<char> stk;
        for(auto a:s)
        {
            if(a=='(')
            {
                if(stk.size()>0)
                {
                    ans+='(';
                }
                stk.push('(');
            }
            else{
               if(stk.size()>1)
               {
                   ans+=')';
               }
                stk.pop();
            }
        }
        return ans;
    }
};


 