class Solution {
public:
    string convertToTitle(int columnNumber) {
    int n=columnNumber;
    string res;
    char tmp;
    while(n){
       n -= 1;
       tmp = 'A' + n % 26;
       res = tmp + res;
       n /= 26;
    }

    return res;
    }
};