class Solution {
public:
    void reverseString(vector<char>& s) {
        // reverse(s.begin(),s.end());
        //   int size=s.size();
        // for(int i=0;i<size/2;i++){
        //     char temp=s[i];
        //     s[i]=s[size-1-i];
        //     s[size-1-i]=temp;
        // }
          int i = 0;
        int j = s.size() - 1;
        solve(s, i, j);
    }
    void solve(vector<char>& s, int i, int j){
        if(i >= j) return;
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        solve(s, ++i, --j);
    
        
    }
};

