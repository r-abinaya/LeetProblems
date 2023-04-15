class NumArray {
    ArrayList<Integer> pref=new ArrayList<Integer>();
    public NumArray(int[] nums) {
        int n = nums.length;
		pref.clear();
        for(int i = 0; i < n; i++){
            if(i == 0)
                pref.add(nums[i]);
            else
                pref.add(nums[i] + pref.get(i - 1));
        }
    }
    
    public int sumRange(int left, int right) {
        if(left == 0)
            return pref.get(right);
        return pref.get(right) - pref.get(left - 1); 
    }
}

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(left,right);
 */