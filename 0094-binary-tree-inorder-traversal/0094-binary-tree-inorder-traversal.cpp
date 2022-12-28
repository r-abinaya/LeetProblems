/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
       vector<int> inorder;
        
        TreeNode* cur=root;    //current node root
       while(cur!=NULL){
           if(cur->left==NULL)    //if no left move right
           {
              inorder.push_back(cur->val);
               cur=cur->right;
           }
           else{                               
           TreeNode* pre=cur->left;             //predecessor to visit
           while(pre->right && pre->right!=cur){       
               pre=pre->right;
           }
           if(pre->right==NULL)      //right points to null means make thread to current 
           {
               pre->right=cur;
               cur=cur->left;         //make thread and move left
               
           }
           else{                           
               pre->right=NULL;          //if threaded cut it and print current
               inorder.push_back(cur->val);
               cur=cur->right;
           }
           }
       }
        return inorder;
    }
};
       
           
               
           
        
 
          
           