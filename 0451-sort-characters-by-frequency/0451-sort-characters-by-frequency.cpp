class Solution {
public:
    // bool comparator()
    // {
    //     if(mp1.second>mp2.second)
    //         return true;
    //     return false;
    // }
    string frequencySort(string s) {
        // map<char,int> mp;
        //  for(int i=0;i<s.length();i++)
        //  {
        //         mp[s[i]]++;
        //  }
        // sort(mp.begin(),mp.end(),comparator);
        // string ans="";
        // for(auto a:mp)
        // {
        //     while(a.second--)
        //     {
        //        ans+=a.first;
        //     }
        // }
        // return ans;
        int counts[256] = {0};
        for (char ch : s)
            ++counts[ch];
        sort(s.begin(), s.end(), [&](char a, char b) { 
            return counts[a] > counts[b] || (counts[a] == counts[b] && a < b); 
        });
        return s;

    }
    
};