class Solution {
public:
 
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> count;
        
        vector<int> same;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
          
                // if(count.find(target-nums[i])!=count.end())   
            if(count.count(target-nums[i]))
            {
                return {count[target-nums[i]],i};
            }
              count[nums[i]]=i;
        }
        return {};
    }
};

