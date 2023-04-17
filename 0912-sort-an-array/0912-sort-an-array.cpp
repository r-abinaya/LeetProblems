class Solution {
public:
    // void swap(vector<int> nums,int l,int r)
    // {
    //     int temp=nums[l];
    //     nums[l]=nums[r];
    //     nums[r]=temp;
    // }
    // int partition(vector<int> nums,int left,int right)
    // {
    //     int pivot=nums[right];
    //     int i=left-1;
    //     for(int j=left;j<right;j++)
    //     {
    //         if(nums[j]<pivot)
    //         {
    //             i++;
    //             swap(nums,i,j);
    //         }
    //     }
    //     swap(nums,i+1,right);
    //     return i+1;
    // }
    // void quickSort(vector<int> nums,int left,int right){
    //     if(left<right)
    //     {
    //         int pi=partition(nums,left,right);
    //         quickSort(nums,left,pi-1);
    //         quickSort(nums,pi+1,right);
    //     }
    // }
    void outPlaceMerge(vector<int> &nums, int low, int mid, int high) {
	if (low >= high) return;
	int l = low, r = mid + 1, k = 0, size = high - low + 1;
	vector<int> sorted(size, 0);
	while (l <= mid and r <= high)
		sorted[k++] = nums[l] < nums[r] ? nums[l++] : nums[r++];
	while (l <= mid) 
		sorted[k++] = nums[l++];
	while (r <= high) 
		sorted[k++] = nums[r++];
	for (k = 0; k < size; k++)
		nums[k + low] = sorted[k];
}

void mergeSort(vector<int> &nums, int low, int high) {
	if (low >= high) return;
	int mid = (high - low) / 2 + low;
	mergeSort(nums, low, mid);
	mergeSort(nums, mid + 1, high);
	outPlaceMerge(nums, low, mid, high);
}
    vector<int> sortArray(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // return nums;
         int n=nums.size();
        mergeSort(nums,0,n-1);
        return nums;
    }
};
