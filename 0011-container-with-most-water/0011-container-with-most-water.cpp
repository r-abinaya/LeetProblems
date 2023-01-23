class Solution {
public:
    int maxArea(vector<int>& height) {
        int max=INT_MIN;
        int n=height.size();
        int i=0,j=n-1,temp;
        while(i<j){
            temp=(j-i)*min(height[i],height[j]);
            if(temp>max)
                max=temp;
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return max;
    }
};
 
       