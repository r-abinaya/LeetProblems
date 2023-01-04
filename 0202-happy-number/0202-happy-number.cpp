class Solution {
public:
    int next(int x)
    {
       int sum=0;
       while(x!=0)
       {
           sum+=pow(x%10,2);
           x=x/10;
       }
        return sum;
    }
    bool isHappy(int n) {
        int slow=next(n);
        int fast=next(next(n));
        while(slow!=fast)
        {
            slow=next(slow);
            fast=next(next(fast));
        }
        return fast==1;
    }
};