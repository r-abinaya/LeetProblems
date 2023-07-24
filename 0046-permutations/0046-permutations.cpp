class Solution {
public:
    void func(vector<int> nums, vector<vector<int>> &ans, vector<int> ds,int mp[])
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(mp[i]!=1)
            {
                mp[i]=1;
                ds.push_back(nums[i]);
                func(nums,ans,ds,mp);
                ds.pop_back();
                mp[i]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>> ans;
         vector<int> ds;
       
        int n=nums.size();
        int mp[n];
        for(int i=0;i<n;i++)
            mp[i]=0;
         func(nums,ans,ds,mp);
          return ans;
    }
};