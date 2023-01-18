class Solution {
public:
    int findMin(vector<int>& nums) {
         int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = (high-low)/2 + low;
            if(mid-1>=0 && nums[mid-1]>nums[mid]) return nums[mid];
            else if(nums[mid]<nums[0]) high = mid-1;
            else low = mid+1;
        }
        if(low>nums.size()-1) return nums[0];
        return -1;   
     
        
    }
};


   