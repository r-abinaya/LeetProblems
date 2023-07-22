class Solution {
public:
    int uniquePaths(int m, int n) {
        int res=1;
        int r=m-1;
        double N=m+n-2;
        for(int i=1;i<=r;i++)
        {
            res=res*(N-r+i)/i;
        }
        return (int)res;
    }
};