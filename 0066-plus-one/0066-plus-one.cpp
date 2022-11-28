class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     
       int carry;
        
        int n=digits.size();
        carry=(digits[n-1]+1)/10;
        digits[n-1]=(digits[n-1]+1)%10;
        
        if(carry==0){
            return digits;
        }
        
        for(int i=n-2;i>=0;i--){
            int num=(digits[i]+carry)%10;
            carry=(digits[i]+1)/10;
            digits[i]=num;
            
            if(carry==0)
                return digits;
        }
        
        if(carry!=0){
            vector<int> sol;
            sol.push_back(carry);
            for(int i=0;i<n;i++)sol.push_back(digits[i]);
            return sol;
        }
        
        return digits;
        
    }
  
};


        
        
        
        
        