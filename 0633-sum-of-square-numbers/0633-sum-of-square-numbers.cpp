class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c<0){
            return false;
        }
        long int num;
        long int l=0,h=sqrt(c);
        while(l<=h){
             num=l*l+h*h;
             if(num<c)
                 l++;
             else if(num>c)
                 h--;
            else
                return true;
        }
       
        return false;
    }
};


    	