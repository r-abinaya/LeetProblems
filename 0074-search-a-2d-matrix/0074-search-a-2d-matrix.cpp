class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int r=0,c=cols-1;
        while(c>-1 && r<rows){
            int curr=matrix[r][c];
            if(curr==target)
                return true;
            else if(target>curr)
                r++;
            else
                c--;
        }
        return false;
    }
};

   
		  
	