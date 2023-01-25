class Solution {
public:
    int trap(vector<int>& height) {
//             int n=height.size(),water=0;
//             vector<int> left(n,0);
//             vector<int> right(n,0);
        
//         left[0]=height[0];
//         for(int i=1;i<n;i++)
//           left[i]=max(height[i],left[i-1]);
        
//         right[n-1]=height[n-1];
//         for(int i=n-2;i>=0;i--)
//             right[i]=max(height[i],right[i+1]);
        
        
//         for(int i=1;i<n-1;i++)
//         {
//             int var = min(left[i - 1], right[i + 1]);
//             if (var > height[i]) 
//             water += var - height[i];
            
//         }
//             return water;
        int n=height.size();
          int left=0;
        int right=n-1;
        int res=0;
        int maxleft=0, maxright=0;
        while(left<=right){
            if(height[left]<=height[right]){
                if(height[left]>=maxleft) maxleft=height[left];
                else res+=maxleft-height[left];
                left++;
            }
            else{
                if(height[right]>=maxright) maxright= height[right];
                else res+=maxright-height[right];
                right--;
            }
        }
        return res;
    }
};

 
 