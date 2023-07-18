class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      sort(nums.begin(),nums.end());
       int n=nums.size();
        if(n<3)
            return {};
        if(nums[0]>0)
            return {};
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();++i){
              if(nums[i]>0)
                  break;
            if(i>0 && nums[i]==nums[i-1])
                continue;
            
            int sum=0;
            int low=i+1,high=nums.size()-1;
            while(low<high){
                  sum=nums[i]+nums[low]+nums[high];
                  if(sum>0)
                      high--;
                 else if(sum<0)
                     low++;
                else{
                    ans.push_back({nums[i],nums[low],nums[high]});
                    int low_occurrence=nums[low];
                    
                    int high_occurrence=nums[high];
                    while(low<high && low_occurrence==nums[low])
                        low++;
                    while(low<high && high_occurrence==nums[high])
                       high--;
                }
            }
        
        }
           return ans;
     }
  
    
};

       
       
      
          
               
                
                 