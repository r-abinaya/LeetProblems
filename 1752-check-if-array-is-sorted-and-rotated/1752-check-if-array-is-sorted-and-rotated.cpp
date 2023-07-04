class Solution {
public:
    bool check(vector<int>& nums) {
       // int size= nums.size();
       //  int count=0;
       //  for(int x=0;x<size;x++)
       //  {
       //      if(nums[x] > nums[x%size])
       //          count++;
       //  }
       //  if(nums[0]<nums[size-1])
       //      count++;
       //  return count<=1;
         int n=nums.size();
        int cnt=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                cnt++;
            }
        }
        if(nums[n-1]>nums[0]){
            cnt++;
        }
        return cnt<=1;
        
    }
};