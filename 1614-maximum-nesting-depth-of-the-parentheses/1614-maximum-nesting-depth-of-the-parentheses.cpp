class Solution {
public:
    int maxDepth(string s) {
        int cnt=0;
        int ans=0;
        stack<char> stk;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='(' && s[i]!=')')
                continue;
            if(s[i]=='(')
            {
                cnt++;
                stk.push('(');
            }
            else if(s[i]==')' && stk.top()=='('){
                ans=max(ans,cnt);
                stk.pop();
                cnt--;
            }
        }
        return ans;
        
    }
};