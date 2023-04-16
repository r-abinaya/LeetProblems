class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,int> mp;
        map<string,int> mp1;
        stringstream in(s);
        int i = 0, n = pattern.size();
        for (string word; in >> word; ++i) {
            if (i == n || mp[pattern[i]] != mp1[word])
                return false;
            mp[pattern[i]] = mp1[word] = i + 1;
        }
        return i == n;
    }
};