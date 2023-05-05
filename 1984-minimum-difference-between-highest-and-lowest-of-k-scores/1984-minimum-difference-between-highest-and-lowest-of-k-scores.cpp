class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
       
          int n=nums.size();
        sort(nums.begin(), nums.end());

        int left=0, right=k-1;
        int diff=INT_MAX;
        int ans=INT_MAX;
        while(right<n){
            diff=nums[right]-nums[left];
            ans=min(ans, diff);
            left++;
            right++;
        }

        return ans;
    }
};