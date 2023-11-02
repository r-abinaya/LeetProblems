class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans=0;
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
           if(s[i]=='(')
           {
               st.push(s[i]);
           }
            else if(s[i]==')' && !st.empty())
            {
                st.pop();
            }
            else if(s[i]==')' && st.empty())
                ans++;
        }
        if(!st.empty())
            ans+=st.size();
        return ans;
    }
};