class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // vector<int> result;
        // for(int i=0;i<nums1.size();i++)
        // {
        //     int flag=0,flag1=0;
        //     for(int j=0;j<nums2.size();j++)
        //     {   
        //        if(nums1[i]!=nums2[j] && flag==0)
        //             continue;
        //         else
        //         {
        //             flag=1;
        //         }
        //         if(flag==1)
        //         {
        //             if(nums1[i]<nums2[j])
        //             {
        //                 result.push_back(nums2[j]);
        //                 flag1=1;
        //                 break;
        //             }
        //         }    
        //     }
        //     if(flag1==0)
        //         result.push_back(-1);
        // }
        // return result;
        vector<int> result(nums1.size(),-1);
        stack<int> st;
        unordered_map<int,int> umap;
        for(int i=0;i<nums2.size();i++)
        {
            int element=nums2[i];
            while(!st.empty() && element>st.top() )
            {
                umap[st.top()]=element;
                st.pop();
            }
            st.push(element);
        }
         for(int i=0;i<nums1.size();i++)
        {
            int element=nums1[i];
            if(umap.find(element)!=umap.end())
            {
                  result[i]=umap[element];               
            }
           
        }
        return result;
        
    }
    
};


        
       
    