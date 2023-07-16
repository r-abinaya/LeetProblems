class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
       // int key=0;
       //  int element=0;
       //  int n=nums.size();
       //  map<int,int>m;
       //  for(int i=0;i<n;i++)
       //  {
       //      m[nums[i]]++;
       //  }
       //  for(auto i=m.begin();i!=m.end();i++)
       //  {
       //      if(i->second>key)
       //      {
       //          key=i->second;
       //          element=i->first;
       //       }
       //  }
       //  return element;
    }
};


       
      
          


       