class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>> v1;
       vector<vector<string>> ans;
      for(string s:strs){
           string t=s;
           sort(t.begin(),t.end());
           v1[t].push_back(s);
       }
        for(auto i:v1){
            ans.push_back(i.second);
            
        }
        return ans;
    }
};
   // unordered_map<string, vector<string>> mp;
   //      for (string s : strs) {
   //          string t = s; 
   //          sort(t.begin(), t.end());
   //          mp[t].push_back(s);
   //      }
   //      vector<vector<string>> anagrams;
   //      for (auto p : mp) { 
   //          anagrams.push_back(p.second);
   //      }
   //      return anagrams;