class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int ans=0;
        heights.push_back(0);
        for(int i=0;i<heights.size();i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
             
                int top=heights[st.top()];
                st.pop();
                int ran=st.empty()?-1:st.top();
                //this is to check if stack is empty, if so we will just take the                 //index
                ans=max(ans,top*(i-ran-1));
                // this is just to take the max area covered so far
            }
            st.push(i);
            //we push into the stack as long as it satsifies our stack condition
        }
        return ans;
    }
};

      
     
     
     
  
        
	
       