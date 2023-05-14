class Solution {
public:
    string addBinary(string a, string b) {
       int i=a.length()-1,j=b.length()-1;
       string ans;
       int c=0;
       while(i>=0 or j>=0)
       {
           int sum=c;
           if(i>=0) sum+=a[i--]-'0';
           if(j>=0) sum+=b[j--]-'0';
           c=sum>1 ? 1 :0;
           ans+=to_string(sum%2);
       }
        if(c)   ans+=to_string(c);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};