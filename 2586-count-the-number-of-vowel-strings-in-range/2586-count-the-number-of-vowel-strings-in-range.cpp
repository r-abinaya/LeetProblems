class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int cnt=0;
        set<char> mp={'a','e','i','o','u'};
        for(int i=left;i<=right;i++)
        {
            char first=words[i][0];
            char last=words[i][words[i].size()-1];
            if(mp.find(first)!=mp.end() && mp.find(last)!=mp.end())
            {
                cnt++;
            }
        }
        return cnt;
    }
};