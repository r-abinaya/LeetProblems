class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,n=nums.size();
        for(i=0;i<n;i++){
          if(nums[i]!=nums[i+1])
              continue;
          break;  
        }
        return nums[i];
    }
};