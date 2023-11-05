class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int j=-1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                j=i;
                break;
            }     
        }
        if(j==-1)
        {
             reverse(nums.begin(),nums.end());
            return;
        }  
        
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]>nums[j])
            {
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                break;
            }
        }
        reverse(nums.begin()+j+1,nums.end());
    }
};