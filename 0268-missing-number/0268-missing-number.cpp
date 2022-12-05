class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> a;
        int i=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for( i=0;i<n;i++){
            if(nums[i]==i)
                continue;
            break;
        }
        return i;
    }
};