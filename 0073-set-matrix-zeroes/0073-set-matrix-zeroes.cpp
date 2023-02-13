class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> ans;
        set<int> ans2;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++)
            {
               
                   if(matrix[i][j]==0){
                       ans.insert(i);
                       ans2.insert(j);
                   }
            }
            
        }
   
         for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++)
            {
                 if(ans.find(i)!=ans.end()||ans2.find(j)!=ans2.end()){
                       matrix[i][j]=0;
                   }
            }
            
        }
      
        
    }
};