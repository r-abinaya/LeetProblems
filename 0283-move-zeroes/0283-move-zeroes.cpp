class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     int i=0,j=0;
      while(j<nums.size()){
          if(nums[i]==0 && nums[j]==0) j++;
          else if(nums[i]==0 && nums[j]!=0)
          {
             int t=nums[i];
              nums[i]=nums[j];
              nums[j]=t;
              i++;
          }
          else
          {
              i++;
              j++;
          }
      }
    }
};