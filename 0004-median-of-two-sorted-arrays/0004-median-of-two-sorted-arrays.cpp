class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // double ans=0;
        // if(nums1.size()==NULL)
        // {
        //     int n=nums2.size();
        //     int m=floor(n/2);
        //     if(n%2==0){
        //         ans=(nums2[m]+nums2[m-1])/2.0;
        //         return ans;
        //     }
        //     ans=nums2[m];
        //     return ans; 
        // }
        // if(nums2.size()==NULL){
        //     int n=nums1.size();
        //     int m=floor(n/2);
        //     if(n%2==0){
        //         ans=(nums1[m]+nums1[m-1])/2.0;
        //         return ans;
        //     }
        //     ans=nums1[m];
        //     return ans;
        // }
        // vector<int> nums(nums1.size() + nums2.size());
        // merge(nums1.begin(),
        //            nums1.end(),
        //            nums2.begin(),
        //            nums2.end(),
        //            nums.begin());
        //  sort(nums.begin(),nums.end());
        //     int n=nums.size();
        //     int m=floor(n/2);
        //     if(n%2==0){
        //         ans=(nums[m]+nums[m-1])/2.0;
        //         return ans;
        //     }
        // ans=nums[m];
        //     return ans;
        if(nums1.size()>nums2.size()) return findMedianSortedArrays(nums2,nums1);
        int n1=nums1.size();
        int n2=nums2.size();
        int n = n1 + n2; //total length
        int left = (n1 + n2 + 1) / 2;
        int low=0;
        int high=n1;
       while (low <= high) {
        int mid1 = (low + high) >> 1;
        int mid2 = left - mid1;
        //calculate l1, l2, r1 and r2;
        int l1 = INT_MIN, l2 = INT_MIN;
        int r1 = INT_MAX, r2 = INT_MAX;
        if (mid1 < n1) r1 = nums1[mid1];
        if (mid2 < n2) r2 = nums2[mid2];
        if (mid1 - 1 >= 0) l1 = nums1[mid1 - 1];
        if (mid2 - 1 >= 0) l2 = nums2[mid2 - 1];

        if (l1 <= r2 && l2 <= r1) {
            if (n % 2 == 1) return max(l1, l2);
            else return ((double)(max(l1, l2) + min(r1, r2))) / 2.0;
        }

        //eliminate the halves:
        else if (l1 > r2) high = mid1 - 1;
        else low = mid1 + 1;
    }
    return 0; //dummy statement
    }
};