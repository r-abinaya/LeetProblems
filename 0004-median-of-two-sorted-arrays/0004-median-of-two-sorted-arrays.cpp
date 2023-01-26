class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans=0;
        if(nums1.size()==NULL)
        {
            int n=nums2.size();
            int m=floor(n/2);
            if(n%2==0){
                ans=(nums2[m]+nums2[m-1])/2.0;
                return ans;
            }
            ans=nums2[m];
            return ans; 
        }
        if(nums2.size()==NULL){
            int n=nums1.size();
            int m=floor(n/2);
            if(n%2==0){
                ans=(nums1[m]+nums1[m-1])/2.0;
                return ans;
            }
            ans=nums1[m];
            return ans;
        }
        vector<int> nums(nums1.size() + nums2.size());
        merge(nums1.begin(),
                   nums1.end(),
                   nums2.begin(),
                   nums2.end(),
                   nums.begin());
         sort(nums.begin(),nums.end());
            int n=nums.size();
            int m=floor(n/2);
            if(n%2==0){
                ans=(nums[m]+nums[m-1])/2.0;
                return ans;
            }
        ans=nums[m];
            return ans;
    }
};