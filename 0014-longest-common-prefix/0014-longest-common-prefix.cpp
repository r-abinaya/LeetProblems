class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        // int ans=s[0].length(),n=s.size();
        // for(int i=1;i<n;i++){
        //     int j=0;
        //     while(s[0][j]==s[i][j] && j<s[i].length()) j++;
        //     ans=min(ans,j);
        // }
        // return s[0].substr(0,ans);
        int ans=s[0].length(),n=s.size();
        for(int i=1;i<n;i++)
        {
            int j=0;
            while(s[0][j]==s[i][j] && j<s[i].length()) j++;
            ans=min(ans,j);
        }
        return s[0].substr(0,ans);
    }
};
   
       
        
           
        