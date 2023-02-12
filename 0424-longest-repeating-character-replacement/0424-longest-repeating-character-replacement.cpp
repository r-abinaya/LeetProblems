class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        vector<int> tracker(26,0);
        int maxFreq=0,ans=0;
        for(int i=0;i<n;i++)
        {
            maxFreq=max(maxFreq,++tracker[s[i]-'A']);
            if(ans-maxFreq<k)
            {
                ans++;
            }
            else
            {
                tracker[s[i-ans]-'A']--;
            }
        }
        return ans;
    }
};