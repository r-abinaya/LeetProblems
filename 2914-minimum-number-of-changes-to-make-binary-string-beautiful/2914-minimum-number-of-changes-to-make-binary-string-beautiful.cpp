class Solution {
public:
    int minChanges(string s) {
          int ans = 0, lastSeen = s[0], count = 0;
    for(auto c : s){
        if(c == lastSeen) count++;
        else{
            if(count%2) { ans++; count = 0; }
            else count = 1;
            lastSeen = c;
        }
    }
    return ans;
    }
};