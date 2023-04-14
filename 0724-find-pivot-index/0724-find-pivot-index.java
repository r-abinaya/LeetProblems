class Solution {
    public int pivotIndex(int[] nums) {
        int sum=0;
        int total=0;
        for(int num:nums)
            total+=num;
        for(int i=0;i<nums.length;sum+=nums[i++])
        {
            if(sum*2==total-nums[i])
                return i;
        }
        return -1;
    }
}