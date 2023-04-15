class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
         int n=nums.length;
        ArrayList<Integer> ans=new ArrayList<Integer>();
        for(int i=0;i<n;i++)
        {
           int temp=nums[i];
           temp=(temp>0)?temp:-temp;
           if(nums[temp-1]>0)
               nums[temp-1]*=-1;
        }
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
                ans.add(i+1);
            
        }
        
        return ans;
    }
}