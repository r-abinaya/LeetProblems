class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp;
        set<char> st;
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])==mp.end()){
                if(st.find(t[i])!=st.end()){
                    return false;
                }
                mp[s[i]]=t[i];
                st.insert(t[i]);
            }
            else{
                if(mp[s[i]]!=t[i]){
                    return false;
                }
            }
        }
        return true;
    }
};