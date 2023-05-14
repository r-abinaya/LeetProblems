class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int max_count=0,max_row=0;
        for(int i=0;i<m;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==1)
                    count++;
                
            }
            if(max_count<count)
                max_row=i;
            max_count=max(count,max_count);
    
        }
        return {max_row,max_count};
    }
};