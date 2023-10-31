class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        double num=0;
        int len=s.length();
        while(s[i]==' ')  i++;
       bool pos= s[i]=='+' ;
       bool neg= s[i]=='-' ;
       pos == true ? i++ : i;
       neg == true ? i++ : i;
       while(s[i]>='0' && s[i]<='9' && i<len)
       {
           num=(num*10)+(s[i]-'0');
           i++;
       }
        num = neg ? -num : num;
        cout<<num<<endl;
        num = (num > INT_MAX) ? INT_MAX : num;
        num = (num < INT_MIN) ? INT_MIN : num;
        cout<<num<<endl;
        return int(num);
           
    }
};