class Solution {
    public int majorityElement(int[] nums) {
        int element=0;
        int n=nums.length;
        Map<Integer,Integer> mp=new HashMap<Integer,Integer>();
        for(int num:nums)
        {
            if(!mp.containsKey(num))
            {
                mp.put(num,1);
            }
            else
                mp.put(num,mp.get(num)+1);
            if(mp.get(num)>nums.length/2)
            {
                element=num;
                break;
            }
        }
        return element;
    }
}

 
    
    