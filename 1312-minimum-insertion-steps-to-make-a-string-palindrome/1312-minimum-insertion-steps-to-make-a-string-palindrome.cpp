class Solution {
public:
     vector<vector<int>> memo;
    int dp(string &s,int i,int j)
    {
        if(i>=j)							
            return 0;
        if(memo[i][j]!=-1)				
            return memo[i][j];
        return memo[i][j]=s[i]==s[j]?dp(s,i+1,j-1):1+min(dp(s,i+1,j),dp(s,i,j-1));		
    }
    int minInsertions(string s) {
        memo.resize(s.length(),vector<int>(s.length(),-1));
        return dp(s,0,s.length()-1);
    }
    
};