class Solution {
public:
    bool isPalindrome(string s) {
        int l=0;
        int h=s.length()-1;
        while(l<h){
          if(!isalpha(s[l]) and !isdigit(s[l])){
                ++l;
                continue;
            }
            if(!isalpha(s[h]) and !isdigit(s[h])){
                --h;
                continue;
            }
            if(tolower(s[l])!=tolower(s[h]) )
                return false;
            
            ++l;
            --h;
        }
        return true;
    }
};
 
		