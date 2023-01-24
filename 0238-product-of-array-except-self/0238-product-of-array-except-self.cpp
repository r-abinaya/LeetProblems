class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         vector<int>prod(nums.size(),1);
         int i,temp=1;    
         for (i = 0; i < nums.size(); i++) {
              prod[i] = temp; 
              temp *= nums[i];
          }
 
   
          temp = 1;
 
   
        for (i = nums.size() - 1; i >= 0; i--) {
            prod[i] *= temp;
            temp *= nums[i];
         }
      return prod;  
    }
};