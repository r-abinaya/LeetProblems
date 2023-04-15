class Solution {
public:
    int maxNumberOfBalloons(string text) {
          map<char,int> mp;
        for(int i=0;i<text.length();i++)
        {
            mp[text[i]]++;
        }
        string t="balloon";
        int count=0;
        while(true)
        {
            for(int i=0;i<t.length();i++)
            {
                if(mp[t[i]]!=0)
                mp[t[i]]--;
                else
                    return count;
            }
            count++;
        }
        return 0;
    }
};