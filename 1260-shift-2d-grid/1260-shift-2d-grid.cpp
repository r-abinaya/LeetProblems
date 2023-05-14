class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> ans(m,vector<int>(n,0));
        for(int i=0;i<n*m;i++)
        {
            int ori_x=i%n;
            int ori_y=i/n;
            int new_x=(ori_x +k)%n;
            int new_y=(ori_y+(ori_x +k)/n)%m;
            ans[new_y][new_x]=grid[ori_y][ori_x];
            
        }
        return ans;
    }
};


//         vector<vector<int>> ans(m, vector<int>(n, 0));
//         for (int i = 0; i < m * n; ++i) {
//             int ori_y = i / n;
//             int ori_x = i % n;
//             int new_y = (ori_y + (ori_x + k) / n) % m;
//             int new_x = (ori_x + k) % n;
            
//             ans[new_y][new_x] = grid[ori_y][ori_x];
//         }
//         return ans;